extern int D_002456A0[];
extern float D_00245858[];

void func_0C1FA8(int a0, int a1)
{
    if (D_002456A0[a0] != 0) {
        if (D_002456A0[a0] != a1) {
            if (D_00245858[a0] == 0.0f) {
                D_00245858[a0] = 1.0f;
            }
        }
    }
    D_002456A0[a0] = a1;
}
