// This class defines an element that is stored
// in the garbage collection information list.
//
#include <iostream>

template <class T>
class PtrDetails
{
  public:
    unsigned refcount; // current reference count
    T *memPtr;         // pointer to allocated memory
    /* isArray is true if memPtr points
to an allocated array. It is false
otherwise. */
    bool isArray; // true if pointing to array
    /* If memPtr is pointing to an allocated
array, then arraySize contains its size */
    int arraySize; // size of array
    // Here, mPtr points to the allocated memory.
    // If this is an array, then size specifies
    // the size of the array.

    PtrDetails(T* pt,int sz= 0 ):memPtr(pt),arraySize(sz)
    {
        // TODO: Implement PtrDetails
        memPtr = pt;
        if sz > 0 isArray = true;
        else isArray = false;
    }
};
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    // TODO: Implement operator==

    return ob1.memPtr == obj2.memPtr;
}