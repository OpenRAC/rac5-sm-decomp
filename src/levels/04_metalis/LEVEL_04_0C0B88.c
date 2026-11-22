/* LEVEL_04:0x0C0B88 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00343230[];

extern int func_0C1540(void);
extern int func_0C2438(char *record, int value);
extern int func_0C2298(int a0);

int func_0C0B88(int mode)
{
    if (mode != 0) {
        D_00343230[0x2C] = 1;
        func_0C2438((char *)D_00343230 + 0x34, func_0C1540());
        func_0C2298(mode);
        return 1;
    }
    return 0;
}
