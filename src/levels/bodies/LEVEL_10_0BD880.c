extern int D_00331E30[];
extern void func_0BD8E0(void);
extern void func_0BD820(void);
extern void func_0BDB40(void);

void func_0BD880(void)
{
    if (D_00331E30[5] == 0 && D_00331E30[12] == 0) {
        if (D_00331E30[21] == 0) *((char *)D_00331E30 + 0x2c) = 0;
    } else {
        func_0BD8E0();
        func_0BD820();
        func_0BDB40();
    }
}
