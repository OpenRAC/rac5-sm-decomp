extern int D_003101B0[];
extern void func_0B9840(void);
extern void func_0B9780(void);
extern void func_0B9AA0(void);

void func_0B97E0(void)
{
    if (D_003101B0[5] == 0 && D_003101B0[12] == 0) {
        if (D_003101B0[21] == 0) *((char *)D_003101B0 + 0x2c) = 0;
    } else {
        func_0B9840();
        func_0B9780();
        func_0B9AA0();
    }
}
