template<typename T>
class deepcopy_smart_ptr
{
private:
    T* object;
public:
    // Other functions.

    // Copy constructor of the deepcopy pointer.
    deepcopy_smart_ptr(const deepcopy_smart_ptr& source)
    {
        // Clone() is virtual - Ensures deep copy of Derived class object.
        object = source->Clone();
    }

    // Copy assignment operator.
    deepcopy_smart_ptr& operator=(const deepcopy_smart_ptr& source)
    {
        if (object)
            delete object;

        object = source->Clone();
    }
};

// Stub to ensure compilation.
int main()
{
    return 0;
}

//
