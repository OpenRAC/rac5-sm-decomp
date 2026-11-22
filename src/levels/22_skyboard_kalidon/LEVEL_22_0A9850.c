/* LEVEL_22:0x0A9850 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_0027E5F0[];

extern int func_0AA1D8(void);
extern int func_0AB0D0(char *record, int value);
extern int func_0AAF30(int a0);

int func_0A9850(int mode)
{
    if (mode != 0) {
        D_0027E5F0[0x2C] = 1;
        func_0AB0D0((char *)D_0027E5F0 + 0x34, func_0AA1D8());
        func_0AAF30(mode);
        return 1;
    }
    return 0;
}
