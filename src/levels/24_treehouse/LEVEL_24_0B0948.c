extern int D_001CD460[];
extern float D_001CD618[];

void func_0B0948(int a0, int a1)
{
    if (D_001CD460[a0] != 0) {
        if (D_001CD460[a0] != a1) {
            if (D_001CD618[a0] == 0.0f) {
                D_001CD618[a0] = 1.0f;
            }
        }
    }
    D_001CD460[a0] = a1;
}
