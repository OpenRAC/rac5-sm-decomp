extern int D_003148F0[];
extern void func_0BAB38(void);
extern void func_0BAA78(void);
extern void func_0BAD98(void);

void func_0BAAD8(void)
{
    if (D_003148F0[5] == 0 && D_003148F0[12] == 0) {
        if (D_003148F0[21] == 0) *((char *)D_003148F0 + 0x2c) = 0;
    } else {
        func_0BAB38();
        func_0BAA78();
        func_0BAD98();
    }
}
