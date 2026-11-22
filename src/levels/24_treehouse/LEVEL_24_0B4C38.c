/* LEVEL_24:0x0B4C38 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_002F48F0[];

extern int func_0B55F0(void);
extern int func_0B64E8(char *record, int value);
extern int func_0B6348(int a0);

int func_0B4C38(int mode)
{
    if (mode != 0) {
        D_002F48F0[0x2C] = 1;
        func_0B64E8((char *)D_002F48F0 + 0x34, func_0B55F0());
        func_0B6348(mode);
        return 1;
    }
    return 0;
}
