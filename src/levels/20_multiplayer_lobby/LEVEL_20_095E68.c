extern int D_0019A1B0[];
extern void func_095EC8(void);
extern void func_095E08(void);
extern void func_096168(void);

void func_095E68(void)
{
    if (D_0019A1B0[5] == 0 && D_0019A1B0[12] == 0) {
        if (D_0019A1B0[21] == 0) *((char *)D_0019A1B0 + 0x2c) = 0;
    } else {
        func_095EC8();
        func_095E08();
        func_096168();
    }
}
