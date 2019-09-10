class A
{
    public:
	int x;
    protected:
	int y;
    private:
        int z;	
};

class B : public A
{
    // x is public
    // y is protected 
    // z is not accesssible from B
};

class C : protected A
{
    // x is protected 
    // y is protected 
    // z is nt accessible from C
};

