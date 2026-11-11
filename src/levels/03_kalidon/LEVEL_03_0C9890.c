/* LEVEL_03:0x0C9890 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_0020C62C;
extern short D_002500C0;
extern char D_0021936D;
extern int D_00219360;
extern int D_00219364;
extern char D_0021935C;
extern int D_002198B8;
extern char D_0021936C;
extern void func_0C92B0(int a);
extern int func_1314E0(void);
extern void func_0C9888(void);

void func_0C9890(void)
{
    int state = *(int *)(D_0020C62C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_002500C0 != 0xD)
            break;
    case 0x16:
        func_0C92B0(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0C92B0(0x18);
        break;
    }
    D_0021935C = 0;
    D_0021936D = 0;
    D_00219360 = 0;
    D_00219364 = 0;
    D_002198B8 = func_1314E0();
    D_0021936C = 1;
    func_0C9888();
}
