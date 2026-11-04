extern int D_00210AE0[];
extern float D_00210C98[];

void func_0B9118(int a0, int a1)
{
    if (D_00210AE0[a0] != 0) {
        if (D_00210AE0[a0] != a1) {
            if (D_00210C98[a0] == 0.0f) {
                D_00210C98[a0] = 1.0f;
            }
        }
    }
    D_00210AE0[a0] = a1;
}
