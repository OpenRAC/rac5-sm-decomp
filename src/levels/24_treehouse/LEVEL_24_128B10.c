extern unsigned char D_001D7CD8[];

void func_0805C0(int);

void func_128B10(int value)
{
    D_001D7CD8[0] = value;
    func_0805C0(value ^ 1);
}
