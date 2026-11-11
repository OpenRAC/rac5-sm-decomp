/* LEVEL_19:0x0B8748 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001A2C34;
extern short D_001E4310;
extern char D_001AFEED;
extern int D_001AFEE0;
extern int D_001AFEE4;
extern char D_001AFEDC;
extern int D_001B0260;
extern char D_001AFEEC;
extern void func_0B81E8(int a);
extern int func_110470(void);
extern void func_0B8740(void);

void func_0B8748(void)
{
    int state = *(int *)(D_001A2C34 + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_001E4310 != 0xD)
            break;
    case 0x16:
        func_0B81E8(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0B81E8(0x18);
        break;
    }
    D_001AFEDC = 0;
    D_001AFEED = 0;
    D_001AFEE0 = 0;
    D_001AFEE4 = 0;
    D_001B0260 = func_110470();
    D_001AFEEC = 1;
    func_0B8740();
}
