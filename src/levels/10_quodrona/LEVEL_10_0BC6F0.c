/* LEVEL_10:0x0BC6F0 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00331E30[];

extern int func_0BD078(void);
extern int func_0BDF70(char *record, int value);
extern int func_0BDDD0(int a0);

int func_0BC6F0(int mode)
{
    if (mode != 0) {
        D_00331E30[0x2C] = 1;
        func_0BDF70((char *)D_00331E30 + 0x34, func_0BD078());
        func_0BDDD0(mode);
        return 1;
    }
    return 0;
}
