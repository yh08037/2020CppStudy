
class test
{
private:
    /* data */
    char *string;
public:
    test(/* args */);
    ~test();
};

test::test(/* args */):string(nullptr)
{
    string = new char[20]();
}

test::~test()
{
    delete[]string;
}


int main()
{
    test a;
    test b = a;
    test c;
    c = a;

    return 0;
}



class test2
{
private:
    /* data */
    
    char *string;
public:
    test2(/* args */);
    ~test2();
    // 1 
    //test2(const test2& a) = delete;
    //2
    test2(const test2& a): string(nullptr)
    {
        string = new char[20]();
        // copy;
    }
};

test2::test2(/* args */) : string(nullptr)
{
    
    string = new char[20]();
}

test2::~test2()
{
    
    delete[]string;
}
