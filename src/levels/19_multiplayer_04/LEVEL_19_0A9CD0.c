/* LEVEL_19:0x0A9CD0 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00276AF0[];

extern int func_0AA6F8(void);
extern int func_0AB988(char *record, int value);
extern int func_0AB7E0(int a0);

int func_0A9CD0(int mode)
{
    if (mode != 0) {
        D_00276AF0[0x2C] = 1;
        func_0AB988((char *)D_00276AF0 + 0x34, func_0AA6F8());
        func_0AB7E0(mode);
        return 1;
    }
    return 0;
}
