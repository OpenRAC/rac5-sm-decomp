/* LEVEL_16:0x0AA3F8 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00276970[];

extern int func_0AAE20(void);
extern int func_0AC0B0(char *record, int value);
extern int func_0ABF08(int a0);

int func_0AA3F8(int mode)
{
    if (mode != 0) {
        D_00276970[0x2C] = 1;
        func_0AC0B0((char *)D_00276970 + 0x34, func_0AAE20());
        func_0ABF08(mode);
        return 1;
    }
    return 0;
}
