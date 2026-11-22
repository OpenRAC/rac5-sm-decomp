/* LEVEL_15:0x09B9F0 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00240270[];

extern int func_09C378(void);
extern int func_09D268(char *record, int value);
extern int func_09D0C8(int a0);

int func_09B9F0(int mode)
{
    if (mode != 0) {
        D_00240270[0x2C] = 1;
        func_09D268((char *)D_00240270 + 0x34, func_09C378());
        func_09D0C8(mode);
        return 1;
    }
    return 0;
}
