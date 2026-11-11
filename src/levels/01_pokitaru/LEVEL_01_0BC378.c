extern long long func_0BC368(void);
extern unsigned int D_00328A30[];

void func_0BC378(void)
{
    if (func_0BC368() != 0) {
        D_00328A30[2]--;
        if (D_00328A30[2] == 0) D_00328A30[0] = 3;
    }
    if (D_00328A30[3] != 0) {
        if (D_00328A30[3] != 0xffffffffu) D_00328A30[3]--;
    }
}
