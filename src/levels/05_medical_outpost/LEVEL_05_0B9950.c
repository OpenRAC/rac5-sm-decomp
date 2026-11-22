/* LEVEL_05:0x0B9950 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_003148F0[];

extern int func_0BA2D8(void);
extern int func_0BB1C8(char *record, int value);
extern int func_0BB028(int a0);

int func_0B9950(int mode)
{
    if (mode != 0) {
        D_003148F0[0x2C] = 1;
        func_0BB1C8((char *)D_003148F0 + 0x34, func_0BA2D8());
        func_0BB028(mode);
        return 1;
    }
    return 0;
}
