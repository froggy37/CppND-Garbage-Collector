// This class defines an element that is stored
// in the garbage collection information list.
//
template <class T>
class PtrDetails
{
  public:
    unsigned refcount; 
    T *memPtr;
    bool isArray;
    unsigned arraySize; 

    PtrDetails(T *Ptr, int size) : memPtr(Ptr) {
        if(size > 0){
            isArray = true;
        }
    }
};

// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    return ob1.memPtr == ob2.memPtr
}
