extern long long func_0BA910(void);
extern unsigned int D_003148F0[];

void func_0BA920(void)
{
    if (func_0BA910() != 0) {
        D_003148F0[2]--;
        if (D_003148F0[2] == 0) D_003148F0[0] = 3;
    }
    if (D_003148F0[3] != 0) {
        if (D_003148F0[3] != 0xffffffffu) D_003148F0[3]--;
    }
}
