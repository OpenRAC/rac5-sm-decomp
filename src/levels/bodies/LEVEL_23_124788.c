extern unsigned char D_001DA458[];

void func_07D1E0(int);

void func_124788(int value)
{
    D_001DA458[0] = value;
    func_07D1E0(value ^ 1);
}
