extern int D_0021A7F0;
extern char *D_001F3FAC;

void func_028808(int);

void func_0172D8(void)
{
    int v = D_0021A7F0;

    *(int *)(D_001F3FAC + 0x1C6C) = v;
    *(char *)(D_001F3FAC + 0x10513) = 0;
    func_028808(v);
}
