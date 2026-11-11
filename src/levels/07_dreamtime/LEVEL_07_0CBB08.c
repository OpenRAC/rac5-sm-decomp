/* LEVEL_07:0x0CBB08 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_002082AC;
extern short D_0024AB40;
extern char D_00214FED;
extern int D_00214FE0;
extern int D_00214FE4;
extern char D_00214FDC;
extern int D_00215538;
extern char D_00214FEC;
extern void func_0CB528(int a);
extern int func_136118(void);
extern void func_0CBB00(void);

void func_0CBB08(void)
{
    int state = *(int *)(D_002082AC + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_0024AB40 != 0xD)
            break;
    case 0x16:
        func_0CB528(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0CB528(0x18);
        break;
    }
    D_00214FDC = 0;
    D_00214FED = 0;
    D_00214FE0 = 0;
    D_00214FE4 = 0;
    D_00215538 = func_136118();
    D_00214FEC = 1;
    func_0CBB00();
}
