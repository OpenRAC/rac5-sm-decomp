/* LEVEL_06:0x0B5CA8 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_003157B0[];

extern int func_0B6630(void);
extern int func_0B7520(char *record, int value);
extern int func_0B7380(int a0);

int func_0B5CA8(int mode)
{
    if (mode != 0) {
        D_003157B0[0x2C] = 1;
        func_0B7520((char *)D_003157B0 + 0x34, func_0B6630());
        func_0B7380(mode);
        return 1;
    }
    return 0;
}
