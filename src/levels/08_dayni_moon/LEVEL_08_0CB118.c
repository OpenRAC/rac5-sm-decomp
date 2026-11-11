extern unsigned char D_00246A24;
extern char *D_0023CB2C;
extern unsigned char D_0024F609;
extern int func_1447D8(int);
extern void func_028300(void);

void func_0CB118(void)
{
    if (D_00246A24 != 0)
        func_1447D8(*(int *)(D_0023CB2C + 0x1c6c));
    func_028300();
    D_0024F609 = 0;
}
