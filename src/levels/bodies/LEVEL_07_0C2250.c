extern unsigned char D_00211E64;
extern char *D_002082AC;
extern unsigned char D_0021AA49;
extern void func_1362A0(int);
extern void func_028038(void);

void func_0C2250(void)
{
    if (D_00211E64 != 0)
        func_1362A0(*(int *)(D_002082AC + 0x1c6c));
    func_028038();
    D_0021AA49 = 0;
}
