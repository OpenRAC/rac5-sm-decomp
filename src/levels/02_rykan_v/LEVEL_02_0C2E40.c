extern int D_0033FF30[];
extern void func_0C2EA0(void);
extern void func_0C2DE0(void);
extern void func_0C3100(void);

void func_0C2E40(void)
{
    if (D_0033FF30[5] == 0 && D_0033FF30[12] == 0) {
        if (D_0033FF30[21] == 0) *((char *)D_0033FF30 + 0x2c) = 0;
    } else {
        func_0C2EA0();
        func_0C2DE0();
        func_0C3100();
    }
}
