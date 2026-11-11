extern unsigned char D_00220478[];

void func_08A5B8(int);

void func_13F490(int value)
{
    D_00220478[0] = value;
    func_08A5B8(value ^ 1);
}
