extern char D_002A01D8[];

void func_0A0568(char *);
void func_0A06C8(int, int);

void func_0A06F8(int i)
{
    func_0A0568(D_002A01D8 + i * 0x18);
    if (i == 6)
        func_0A06C8(6, 0);
}
