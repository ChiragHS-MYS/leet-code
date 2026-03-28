// Last updated: 28/3/2026, 11:18:49 pm
1class MyHashSet {
2private:
3	int prime;
4	vector<list<int>> table;
5
6	int hash(int key) {
7		return key % prime;
8	}
9
10	list<int>::iterator search(int key) {
11		int h = hash(key);
12		return find(table[h].begin(), table[h].end(), key);
13	}
14
15public:
16	MyHashSet() : prime(10007), table(prime) {}
17	
18	void add(int key) {
19		int h = hash(key);
20		if (!contains(key))
21			table[h].push_back(key);
22	}
23	
24	void remove(int key) {
25		int h = hash(key);
26		auto it = search(key);
27		if (it != table[h].end())
28			table[h].erase(it);
29	}
30	
31	bool contains(int key) {
32		int h = hash(key);
33		return search(key) != table[h].end();
34	}
35};