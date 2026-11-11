extern char D_003026D8[];

void func_0B0690(char *);
void func_0B07F0(int, int);

void func_0B0820(int i)
{
    func_0B0690(D_003026D8 + i * 0x18);
    if (i == 6)
        func_0B07F0(6, 0);
}
