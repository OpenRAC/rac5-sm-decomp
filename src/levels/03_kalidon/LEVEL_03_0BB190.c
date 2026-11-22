/* LEVEL_03:0x0BB190 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_003438B0[];

extern int func_0BBB18(void);
extern int func_0BCA08(char *record, int value);
extern int func_0BC868(int a0);

int func_0BB190(int mode)
{
    if (mode != 0) {
        D_003438B0[0x2C] = 1;
        func_0BCA08((char *)D_003438B0 + 0x34, func_0BBB18());
        func_0BC868(mode);
        return 1;
    }
    return 0;
}
