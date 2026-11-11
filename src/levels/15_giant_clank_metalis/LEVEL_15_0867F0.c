extern char D_001CB498[];

void func_086660(char *);
void func_0867C0(int, int);

void func_0867F0(int i)
{
    func_086660(D_001CB498 + i * 0x18);
    if (i == 6)
        func_0867C0(6, 0);
}
