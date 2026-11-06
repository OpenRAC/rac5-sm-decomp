extern unsigned char D_001527E4;
extern char *D_00148C2C;
extern unsigned char D_0015B3C9;
extern void func_0F2168(int);
extern void func_021C88(void);

void func_0A0838(void)
{
    if (D_001527E4 != 0)
        func_0F2168(*(int *)(D_00148C2C + 0x1c6c));
    func_021C88();
    D_0015B3C9 = 0;
}
