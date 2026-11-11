extern int D_002F9E70[];
extern void func_0B3330(void);
extern void func_0B3270(void);
extern void func_0B3590(void);

void func_0B32D0(void)
{
    if (D_002F9E70[5] == 0 && D_002F9E70[12] == 0) {
        if (D_002F9E70[21] == 0) *((char *)D_002F9E70 + 0x2c) = 0;
    } else {
        func_0B3330();
        func_0B3270();
        func_0B3590();
    }
}
