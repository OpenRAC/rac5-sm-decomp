/* LEVEL_09:0x0B8658 -- placement copy of LEVEL_01_0BB3A8.c: when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_003101B0[];

extern int func_0B8FE0(void);
extern int func_0B9ED0(char *record, int value);
extern int func_0B9D30(int a0);

int func_0B8658(int mode)
{
    if (mode != 0) {
        D_003101B0[0x2C] = 1;
        func_0B9ED0((char *)D_003101B0 + 0x34, func_0B8FE0());
        func_0B9D30(mode);
        return 1;
    }
    return 0;
}
