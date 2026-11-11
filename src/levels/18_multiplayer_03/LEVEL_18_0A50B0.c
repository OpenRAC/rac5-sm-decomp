extern int D_001ABCE0[];
extern float D_001ABE98[];

void func_0A50B0(int a0, int a1)
{
    if (D_001ABCE0[a0] != 0) {
        if (D_001ABCE0[a0] != a1) {
            if (D_001ABE98[a0] == 0.0f) {
                D_001ABE98[a0] = 1.0f;
            }
        }
    }
    D_001ABCE0[a0] = a1;
}
