extern long long func_0AACB0(void);
extern unsigned int D_00267C70[];

void func_0AACC0(void)
{
    if (func_0AACB0() != 0) {
        D_00267C70[2]--;
        if (D_00267C70[2] == 0) D_00267C70[0] = 3;
    }
    if (D_00267C70[3] != 0) {
        if (D_00267C70[3] != 0xffffffffu) D_00267C70[3]--;
    }
}
