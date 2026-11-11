extern char D_0018E7E8[];

void func_07F5D0(char *);
void func_07F758(int, int);

void func_07F788(int i)
{
    func_07F5D0(D_0018E7E8 + i * 0x18);
    if (i == 6)
        func_07F758(6, 0);
}
