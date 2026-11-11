extern long long func_0C2C78(void);
extern unsigned int D_0033FF30[];

void func_0C2C88(void)
{
    if (func_0C2C78() != 0) {
        D_0033FF30[2]--;
        if (D_0033FF30[2] == 0) D_0033FF30[0] = 3;
    }
    if (D_0033FF30[3] != 0) {
        if (D_0033FF30[3] != 0xffffffffu) D_0033FF30[3]--;
    }
}
