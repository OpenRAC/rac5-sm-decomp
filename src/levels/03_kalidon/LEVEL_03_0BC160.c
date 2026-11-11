extern long long func_0BC150(void);
extern unsigned int D_003438B0[];

void func_0BC160(void)
{
    if (func_0BC150() != 0) {
        D_003438B0[2]--;
        if (D_003438B0[2] == 0) D_003438B0[0] = 3;
    }
    if (D_003438B0[3] != 0) {
        if (D_003438B0[3] != 0xffffffffu) D_003438B0[3]--;
    }
}
