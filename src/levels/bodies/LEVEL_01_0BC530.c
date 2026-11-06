extern int D_00328A30[];
extern void func_0BC590(void);
extern void func_0BC4D0(void);
extern void func_0BC7F0(void);

void func_0BC530(void)
{
    if (D_00328A30[5] == 0 && D_00328A30[12] == 0) {
        if (D_00328A30[21] == 0) *((char *)D_00328A30 + 0x2c) = 0;
    } else {
        func_0BC590();
        func_0BC4D0();
        func_0BC7F0();
    }
}
