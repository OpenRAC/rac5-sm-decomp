extern long long func_0B9618(void);
extern unsigned int D_003101B0[];

void func_0B9628(void)
{
    if (func_0B9618() != 0) {
        D_003101B0[2]--;
        if (D_003101B0[2] == 0) D_003101B0[0] = 3;
    }
    if (D_003101B0[3] != 0) {
        if (D_003101B0[3] != 0xffffffffu) D_003101B0[3]--;
    }
}
