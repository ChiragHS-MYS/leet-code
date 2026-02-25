// Last updated: 25/2/2026, 11:30:26 pm
1struct Node {
2  int key;
3  int value;
4  int freq;
5  list<int>::const_iterator it;
6};
7
8class LFUCache {
9 public:
10  LFUCache(int capacity) : capacity(capacity), minFreq(0) {}
11
12  int get(int key) {
13    if (!keyToNode.count(key))
14      return -1;
15
16    Node& node = keyToNode[key];
17    touch(node);
18    return node.value;
19  }
20
21  void put(int key, int value) {
22    if (capacity == 0)
23      return;
24    if (keyToNode.count(key)) {
25      Node& node = keyToNode[key];
26      node.value = value;
27      touch(node);
28      return;
29    }
30
31    if (keyToNode.size() == capacity) {
32      // Evict LRU key from the minFreq list
33      const int keyToEvict = freqToList[minFreq].back();
34      freqToList[minFreq].pop_back();
35      keyToNode.erase(keyToEvict);
36    }
37
38    minFreq = 1;
39    freqToList[1].push_front(key);
40    keyToNode[key] = {key, value, 1, cbegin(freqToList[1])};
41  }
42
43 private:
44  int capacity;
45  int minFreq;
46  unordered_map<int, Node> keyToNode;
47  unordered_map<int, list<int>> freqToList;
48
49  void touch(Node& node) {
50    // Update the node's frequency
51    const int prevFreq = node.freq;
52    const int newFreq = ++node.freq;
53
54    // Remove the iterator from prevFreq's list
55    freqToList[prevFreq].erase(node.it);
56    if (freqToList[prevFreq].empty()) {
57      freqToList.erase(prevFreq);
58      // Update minFreq if needed
59      if (prevFreq == minFreq)
60        ++minFreq;
61    }
62
63    // Insert the key to the front of newFreq's list
64    freqToList[newFreq].push_front(node.key);
65    node.it = cbegin(freqToList[newFreq]);
66  }
67};