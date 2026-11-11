extern long long func_0C7288(void);
extern unsigned int D_00377CB0[];

void func_0C7298(void)
{
    if (func_0C7288() != 0) {
        D_00377CB0[2]--;
        if (D_00377CB0[2] == 0) D_00377CB0[0] = 3;
    }
    if (D_00377CB0[3] != 0) {
        if (D_00377CB0[3] != 0xffffffffu) D_00377CB0[3]--;
    }
}
