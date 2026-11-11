extern long long func_0AA748(void);
extern unsigned int D_00276CF0[];

void func_0AA758(void)
{
    if (func_0AA748() != 0) {
        D_00276CF0[2]--;
        if (D_00276CF0[2] == 0) D_00276CF0[0] = 3;
    }
    if (D_00276CF0[3] != 0) {
        if (D_00276CF0[3] != 0xffffffffu) D_00276CF0[3]--;
    }
}
