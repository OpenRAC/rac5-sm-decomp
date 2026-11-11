extern int D_1E65E0[];
extern float D_1E6798[];

void func_0B5660(int a0, int a1)
{
    if (D_1E65E0[a0] != 0) {
        if (D_1E65E0[a0] != a1) {
            if (D_1E6798[a0] == 0.0f) {
                D_1E6798[a0] = 1.0f;
            }
        }
    }
    D_1E65E0[a0] = a1;
}
