/* LEVEL_17:0x0B83B0 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001950B4;
extern short D_001D5490;
extern char D_001A236D;
extern int D_001A2360;
extern int D_001A2364;
extern char D_001A235C;
extern int D_001A26E0;
extern char D_001A236C;
extern void func_0B7E50(int a);
extern int func_10F348(void);
extern void func_0B83A8(void);

void func_0B83B0(void)
{
    int state = *(int *)(D_001950B4 + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_001D5490 != 0xD)
            break;
    case 0x16:
        func_0B7E50(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0B7E50(0x18);
        break;
    }
    D_001A235C = 0;
    D_001A236D = 0;
    D_001A2360 = 0;
    D_001A2364 = 0;
    D_001A26E0 = func_10F348();
    D_001A236C = 1;
    func_0B83A8();
}
