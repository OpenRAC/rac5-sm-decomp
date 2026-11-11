extern int D_00377CB0[];
extern void func_0C74B8(void);
extern void func_0C73F8(void);
extern void func_0C7718(void);

void func_0C7458(void)
{
    if (D_00377CB0[5] == 0 && D_00377CB0[12] == 0) {
        if (D_00377CB0[21] == 0) *((char *)D_00377CB0 + 0x2c) = 0;
    } else {
        func_0C74B8();
        func_0C73F8();
        func_0C7718();
    }
}
