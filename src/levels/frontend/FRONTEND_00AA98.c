extern char D_001230C8[];

void func_00A950(char *);
void func_00AA68(int, int);

void func_00AA98(int i)
{
    func_00A950(D_001230C8 + i * 0x18);
    if (i == 6)
        func_00AA68(6, 0);
}
