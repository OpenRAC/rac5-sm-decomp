/* LEVEL_10:0x0CAEE8 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001FCFAC;
extern short D_0023E640;
extern char D_00209CED;
extern int D_00209CE0;
extern int D_00209CE4;
extern char D_00209CDC;
extern int D_0020A238;
extern char D_00209CEC;
extern void func_0CA908(int a);
extern int func_130F78(void);
extern void func_0CAEE0(void);

void func_0CAEE8(void)
{
    int state = *(int *)(D_001FCFAC + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_0023E640 != 0xD)
            break;
    case 0x16:
        func_0CA908(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0CA908(0x18);
        break;
    }
    D_00209CDC = 0;
    D_00209CED = 0;
    D_00209CE0 = 0;
    D_00209CE4 = 0;
    D_0020A238 = func_130F78();
    D_00209CEC = 1;
    func_0CAEE0();
}
