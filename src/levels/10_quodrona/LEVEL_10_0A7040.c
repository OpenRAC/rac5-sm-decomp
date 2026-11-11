extern char D_002BC858[];

void func_0A6EB0(char *);
void func_0A7010(int, int);

void func_0A7040(int i)
{
    func_0A6EB0(D_002BC858 + i * 0x18);
    if (i == 6)
        func_0A7010(6, 0);
}
