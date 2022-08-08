class MyHashSet {
public:
    
    bool visited[1000005];
    
    MyHashSet() {
        for(int i=0;i<1000002;i++){
            visited[i] = false;
        }
    }
    
    void add(int key) {
        visited[key] = true;
        return;
    }
    
    void remove(int key) {
        visited[key] = false;
        return;
    }
    
    bool contains(int key) {
        if(visited[key]==true) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */