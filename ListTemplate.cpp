template <typename T>
class List {
    private: 
        T *data;
        int size;
    public:
    List() {
        data = new T[100];
        size = 0;
    }
    ~List() {
        delete[] date; // release memory to free storage
    }
    void cons(T item) {
        data[size++] = item;
    }
    List<T> cdr() {
        List<T> result;
        for(int i = 0; i < size-1; i++) {
            result.cons(data[i]);
        }
        return result;
    }
    bool isEmpty() {
        return size == 0;
    }

    friend std::ostream& operator<<(std::ostream& out, List<T> list){
        out << '(';
        for(int i = list.size-1; i >= 0; --i ) {
            out << list.data[i];
            if (i > 0) // add space unless the last item
                out << ' ';
        }
        out << ')';
        return out;
    }
}