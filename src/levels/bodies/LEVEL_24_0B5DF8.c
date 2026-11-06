extern int D_002F48F0[];
extern void func_0B5E58(void);
extern void func_0B5D98(void);
extern void func_0B60B8(void);

void func_0B5DF8(void)
{
    if (D_002F48F0[5] == 0 && D_002F48F0[12] == 0) {
        if (D_002F48F0[21] == 0) *((char *)D_002F48F0 + 0x2c) = 0;
    } else {
        func_0B5E58();
        func_0B5D98();
        func_0B60B8();
    }
}
