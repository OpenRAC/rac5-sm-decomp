extern unsigned char D_0021F6D8[];

void func_087178(int);

void func_1313D8(int value)
{
    D_0021F6D8[0] = value;
    func_087178(value ^ 1);
}
