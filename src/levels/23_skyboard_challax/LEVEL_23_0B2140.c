/* LEVEL_23:0x0B2140 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_002F9E70[];

extern int func_0B2AC8(void);
extern int func_0B39C0(char *record, int value);
extern int func_0B3820(int a0);

int func_0B2140(int mode)
{
    if (mode != 0) {
        D_002F9E70[0x2C] = 1;
        func_0B39C0((char *)D_002F9E70 + 0x34, func_0B2AC8());
        func_0B3820(mode);
        return 1;
    }
    return 0;
}
