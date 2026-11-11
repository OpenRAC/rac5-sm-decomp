/* LEVEL_18:0x0B7E48 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001A2F34;
extern short D_001E4510;
extern char D_001B01ED;
extern int D_001B01E0;
extern int D_001B01E4;
extern char D_001B01DC;
extern int D_001B0560;
extern char D_001B01EC;
extern void func_0B78E8(int a);
extern int func_10EA80(void);
extern void func_0B7E40(void);

void func_0B7E48(void)
{
    int state = *(int *)(D_001A2F34 + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_001E4510 != 0xD)
            break;
    case 0x16:
        func_0B78E8(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0B78E8(0x18);
        break;
    }
    D_001B01DC = 0;
    D_001B01ED = 0;
    D_001B01E0 = 0;
    D_001B01E4 = 0;
    D_001B0560 = func_10EA80();
    D_001B01EC = 1;
    func_0B7E40();
}
