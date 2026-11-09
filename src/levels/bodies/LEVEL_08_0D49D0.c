/* LEVEL_08:0x0D49D0 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_0023CB2C;
extern short D_002844D0;
extern char D_00249BAD;
extern int D_00249BA0;
extern int D_00249BA4;
extern char D_00249B9C;
extern int D_0024A0F8;
extern char D_00249BAC;
extern void func_0D43F0(int a);
extern int func_144650(void);
extern void func_0D49C8(void);

void func_0D49D0(void)
{
    int state = *(int *)(D_0023CB2C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_002844D0 != 0xD)
            break;
    case 0x16:
        func_0D43F0(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0D43F0(0x18);
        break;
    }
    D_00249B9C = 0;
    D_00249BAD = 0;
    D_00249BA0 = 0;
    D_00249BA4 = 0;
    D_0024A0F8 = func_144650();
    D_00249BAC = 1;
    func_0D49C8();
}
