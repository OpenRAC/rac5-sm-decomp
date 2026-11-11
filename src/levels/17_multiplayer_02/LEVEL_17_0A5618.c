extern int D_0019DE60[];
extern float D_0019E018[];

void func_0A5618(int a0, int a1)
{
    if (D_0019DE60[a0] != 0) {
        if (D_0019DE60[a0] != a1) {
            if (D_0019E018[a0] == 0.0f) {
                D_0019E018[a0] = 1.0f;
            }
        }
    }
    D_0019DE60[a0] = a1;
}
