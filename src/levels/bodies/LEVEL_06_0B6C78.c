extern long long func_0B6C68(void);
extern unsigned int D_003157B0[];

void func_0B6C78(void)
{
    if (func_0B6C68() != 0) {
        D_003157B0[2]--;
        if (D_003157B0[2] == 0) D_003157B0[0] = 3;
    }
    if (D_003157B0[3] != 0) {
        if (D_003157B0[3] != 0xffffffffu) D_003157B0[3]--;
    }
}
