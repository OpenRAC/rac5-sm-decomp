extern int D_00215CA0[];
extern float D_00215E58[];

void func_0BC8C0(int a0, int a1)
{
    if (D_00215CA0[a0] != 0) {
        if (D_00215CA0[a0] != a1) {
            if (D_00215E58[a0] == 0.0f) {
                D_00215E58[a0] = 1.0f;
            }
        }
    }
    D_00215CA0[a0] = a1;
}
