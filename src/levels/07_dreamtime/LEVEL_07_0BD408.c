/* LEVEL_07:0x0BD408 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_0033E330[];

extern int func_0BDD90(void);
extern int func_0BEC80(char *record, int value);
extern int func_0BEAE0(int a0);

int func_0BD408(int mode)
{
    if (mode != 0) {
        D_0033E330[0x2C] = 1;
        func_0BEC80((char *)D_0033E330 + 0x34, func_0BDD90());
        func_0BEAE0(mode);
        return 1;
    }
    return 0;
}
