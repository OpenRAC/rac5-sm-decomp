extern int D_001EB570;
extern char *D_001C4C2C;

void func_025E18(int);

void func_015F48(void)
{
    int v = D_001EB570;

    *(int *)(D_001C4C2C + 0x1C6C) = v;
    *(char *)(D_001C4C2C + 0x10513) = 0;
    func_025E18(v);
}
