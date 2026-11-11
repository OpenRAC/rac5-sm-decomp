/* LEVEL_16:0x0B8E70 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001A1AB4;
extern short D_001E4190;
extern char D_001AED6D;
extern int D_001AED60;
extern int D_001AED64;
extern char D_001AED5C;
extern int D_001AF0E0;
extern char D_001AED6C;
extern void func_0B8910(int a);
extern int func_10FDD0(void);
extern void func_0B8E68(void);

void func_0B8E70(void)
{
    int state = *(int *)(D_001A1AB4 + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_001E4190 != 0xD)
            break;
    case 0x16:
        func_0B8910(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0B8910(0x18);
        break;
    }
    D_001AED5C = 0;
    D_001AED6D = 0;
    D_001AED60 = 0;
    D_001AED64 = 0;
    D_001AF0E0 = func_10FDD0();
    D_001AED6C = 1;
    func_0B8E68();
}
