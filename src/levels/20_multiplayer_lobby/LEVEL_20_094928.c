/* LEVEL_20:0x094928 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_0019A1B0[];

extern int func_095350(void);
extern int func_0965E0(char *record, int value);
extern int func_096438(int a0);

int func_094928(int mode)
{
    if (mode != 0) {
        D_0019A1B0[0x2C] = 1;
        func_0965E0((char *)D_0019A1B0 + 0x34, func_095350());
        func_096438(mode);
        return 1;
    }
    return 0;
}
