extern int D_00276970[];
extern void func_0AB998(void);
extern void func_0AB8D8(void);
extern void func_0ABC38(void);

void func_0AB938(void)
{
    if (D_00276970[5] == 0 && D_00276970[12] == 0) {
        if (D_00276970[21] == 0) *((char *)D_00276970 + 0x2c) = 0;
    } else {
        func_0AB998();
        func_0AB8D8();
        func_0ABC38();
    }
}
