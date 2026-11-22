/* LEVEL_02:0x0C1CB8 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_0033FF30[];

extern int func_0C2640(void);
extern int func_0C3530(char *record, int value);
extern int func_0C3390(int a0);

int func_0C1CB8(int mode)
{
    if (mode != 0) {
        D_0033FF30[0x2C] = 1;
        func_0C3530((char *)D_0033FF30 + 0x34, func_0C2640());
        func_0C3390(mode);
        return 1;
    }
    return 0;
}
