template<typename T>
class EverythingButInt
{
public:
    EverythingButInt()
    {
        static_assert(sizeof(T) != sizeof(int), "No int please!");
    }
};

int main()
{
    EverythingButInt<int> test;

    return 0;
}

// Rrror - Static_assert failed due to requirement
// 'sizeof(int) != sizeof(int)' "No int please!"
