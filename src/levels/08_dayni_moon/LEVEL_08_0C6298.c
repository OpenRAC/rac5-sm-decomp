/* LEVEL_08:0x0C6298 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00377CB0[];

extern int func_0C6C50(void);
extern int func_0C7B48(char *record, int value);
extern int func_0C79A8(int a0);

int func_0C6298(int mode)
{
    if (mode != 0) {
        D_00377CB0[0x2C] = 1;
        func_0C7B48((char *)D_00377CB0 + 0x34, func_0C6C50());
        func_0C79A8(mode);
        return 1;
    }
    return 0;
}
