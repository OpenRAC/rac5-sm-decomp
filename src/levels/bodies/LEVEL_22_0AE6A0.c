extern unsigned char D_0015CEE4;
extern char *D_0015332C;
extern unsigned char D_00165AC9;
extern int func_10A770(int);
extern void func_022668(void);

void func_0AE6A0(void)
{
    if (D_0015CEE4 != 0)
        func_10A770(*(int *)(D_0015332C + 0x1c6c));
    func_022668();
    D_00165AC9 = 0;
}
