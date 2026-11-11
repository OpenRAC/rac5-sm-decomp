extern int D_1EB6E0[];
extern float D_1EB898[];

void func_0B5660(int a0, int a1)
{
    if (D_1EB6E0[a0] != 0) {
        if (D_1EB6E0[a0] != a1) {
            if (D_1EB898[a0] == 0.0f) {
                D_1EB898[a0] = 1.0f;
            }
        }
    }
    D_1EB6E0[a0] = a1;
}
