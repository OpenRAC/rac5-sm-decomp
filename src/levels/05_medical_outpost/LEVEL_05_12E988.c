extern unsigned char D_001F60D8[];

void func_084C78(int);

void func_12E988(int value)
{
    D_001F60D8[0] = value;
    func_084C78(value ^ 1);
}
