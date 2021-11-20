template<typename T>
class destructivecopy_ptr
{
private:
    T* object;
public:
    destructivecopy_ptr(T* input): object(input) {}

    ~destructivecopy_ptr()
    {
        delete object;
    }

    // Copy constructor.
    destructivecopy_ptr(destructivecopy_ptr& source)
    {
        // Take ownership on copy.
        object = source.object;

        // Destroy source.
        source.object = nullptr;
    }

    // Copy assignment operator.
    destructivecopy_ptr& operator=(destructivecopy_ptr& source)
    {
        if (object != source.object)
        {
            delete object;

            object = source.object;
            source.object = nullptr;
        }
    }
};

int main()
{
    destructivecopy_ptr<int> num(new int);
    destructivecopy_ptr<int> copy = num;

    // The num is now invalid.
    return 0;
}
