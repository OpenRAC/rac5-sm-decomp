extern int D_0015BB60[];
extern float D_0015BD18[];

void func_0A5608(int a0, int a1)
{
    if (D_0015BB60[a0] != 0) {
        if (D_0015BB60[a0] != a1) {
            if (D_0015BD18[a0] == 0.0f) {
                D_0015BD18[a0] = 1.0f;
            }
        }
    }
    D_0015BB60[a0] = a1;
}
