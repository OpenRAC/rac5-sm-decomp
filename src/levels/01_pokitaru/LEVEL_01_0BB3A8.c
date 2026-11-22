/* LEVEL_01:0x0BB3A8 -- when given a mode, marks the state block, pushes the current value onto its stack and records the mode; reports whether it ran. */
extern unsigned char D_00328A30[];

extern int func_0BBD30(void);
extern int func_0BCC20(char *record, int value);
extern int func_0BCA80(int a0);

int func_0BB3A8(int mode)
{
    if (mode != 0) {
        D_00328A30[0x2C] = 1;
        func_0BCC20((char *)D_00328A30 + 0x34, func_0BBD30());
        func_0BCA80(mode);
        return 1;
    }
    return 0;
}
