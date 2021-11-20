template<typename T>
class smart_pointer
{
private:
    T* rawPtr;
public:
    // Constructor.
    smart_pointer(T* pData) : rawPtr(pData) {}

    // Destructor.
    ~smart_pointer()
    {
        delete rawPtr;
    };

    // Copy constructor.
    smart_pointer(const smart_pointer& anotherSP) {}

    // Copy assignment operator.
    smart_pointer& operator=(const smart_pointer& anotherSP) {}

    // Dereferencing operator.
    T& operator*() const
    {
        return *(rawPtr);
    }

    // Member selection operator.
    T* operator->() const
    {
        return rawPtr;
    }
};

// Empty stub to enable compilation.
int main()
{
    return 0;
}

//
