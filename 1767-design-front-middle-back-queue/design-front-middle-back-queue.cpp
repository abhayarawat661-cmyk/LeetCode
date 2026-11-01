class FrontMiddleBackQueue {
public:
    vector<int> v;

    FrontMiddleBackQueue() {
        
    }

    void pushFront(int val) {
        v.insert(v.begin(), val);
    }

    void pushMiddle(int val) {
        int mid = v.size() / 2;
        v.insert(v.begin() + mid, val);
    }

    void pushBack(int val) {
        v.push_back(val);
    }

    int popFront() {
        if(v.empty())
            return -1;

        int x = v[0];
        v.erase(v.begin());

        return x;
    }

    int popMiddle() {
        if(v.empty())
            return -1;

        int mid = (v.size() - 1) / 2;

        int x = v[mid];
        v.erase(v.begin() + mid);

        return x;
    }

    int popBack() {
        if(v.empty())
            return -1;

        int x = v.back();
        v.pop_back();

        return x;
    }
};