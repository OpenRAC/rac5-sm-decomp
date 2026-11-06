extern long long func_09C9B0(void);
extern unsigned int D_00240270[];

void func_09C9C0(void)
{
    if (func_09C9B0() != 0) {
        D_00240270[2]--;
        if (D_00240270[2] == 0) D_00240270[0] = 3;
    }
    if (D_00240270[3] != 0) {
        if (D_00240270[3] != 0xffffffffu) D_00240270[3]--;
    }
}
