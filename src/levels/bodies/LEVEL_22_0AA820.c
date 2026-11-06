extern long long func_0AA810(void);
extern unsigned int D_0027E5F0[];

void func_0AA820(void)
{
    if (func_0AA810() != 0) {
        D_0027E5F0[2]--;
        if (D_0027E5F0[2] == 0) D_0027E5F0[0] = 3;
    }
    if (D_0027E5F0[3] != 0) {
        if (D_0027E5F0[3] != 0xffffffffu) D_0027E5F0[3]--;
    }
}
