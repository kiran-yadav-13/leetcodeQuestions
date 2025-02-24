class MyHashSet {
    private:
    int size;
    vector<list<int>>buckets;
    int hash(int key){
        return key%size;
    }
public:

    MyHashSet() {
        size=10007; // prime numbers decrease the collisions
        buckets.resize(size);

    }
    
    void add(int key) {
       int index=hash(key);
       if(!contains(key)){
        buckets[index].push_back(key);
       }
    }
    
    void remove(int key) {
        int index=hash(key);
        buckets[index].remove(key);
    }
    
    bool contains(int key) {
        int index=hash(key);
        for(int num:buckets[index]){
            if(num==key) return true;
        }
        return false;
    }
};
