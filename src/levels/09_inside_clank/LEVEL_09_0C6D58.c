/* LEVEL_09:0x0C6D58 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001DDDAC;
extern short D_0021C9C0;
extern char D_001EAAED;
extern int D_001EAAE0;
extern int D_001EAAE4;
extern char D_001EAADC;
extern int D_001EB038;
extern char D_001EAAEC;
extern void func_0C6778(int a);
extern int func_12C0B0(void);
extern void func_0C6D50(void);

void func_0C6D58(void)
{
    int state = *(int *)(D_001DDDAC + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_0021C9C0 != 0xD)
            break;
    case 0x16:
        func_0C6778(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0C6778(0x18);
        break;
    }
    D_001EAADC = 0;
    D_001EAAED = 0;
    D_001EAAE0 = 0;
    D_001EAAE4 = 0;
    D_001EB038 = func_12C0B0();
    D_001EAAEC = 1;
    func_0C6D50();
}
