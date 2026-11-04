extern unsigned char D_00166038[];

void func_078738(int);

void func_10A4E0(int value)
{
    D_00166038[0] = value;
    func_078738(value ^ 1);
}
