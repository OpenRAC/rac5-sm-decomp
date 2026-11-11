extern unsigned char D_0020FCB8[];

void func_087688(int);

void func_130E70(int value)
{
    D_0020FCB8[0] = value;
    func_087688(value ^ 1);
}
