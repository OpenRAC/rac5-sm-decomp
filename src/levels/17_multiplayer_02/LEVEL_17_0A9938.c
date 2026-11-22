/* LEVEL_17:0x0A9938 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00267C70[];

extern int func_0AA360(void);
extern int func_0AB5F0(char *record, int value);
extern int func_0AB448(int a0);

int func_0A9938(int mode)
{
    if (mode != 0) {
        D_00267C70[0x2C] = 1;
        func_0AB5F0((char *)D_00267C70 + 0x34, func_0AA360());
        func_0AB448(mode);
        return 1;
    }
    return 0;
}
