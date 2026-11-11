extern int D_1EBB60[];
extern float D_1EBD18[];

void func_0B5660(int a0, int a1)
{
    if (D_1EBB60[a0] != 0) {
        if (D_1EBB60[a0] != a1) {
            if (D_1EBD18[a0] == 0.0f) {
                D_1EBD18[a0] = 1.0f;
            }
        }
    }
    D_1EBB60[a0] = a1;
}
