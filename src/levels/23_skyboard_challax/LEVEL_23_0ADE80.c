/* LEVEL_23:0x0ADE80 -- replaces a stale entry of the level's int table and
   clears a stale float slot. */
extern int D_1CFBE0[];
extern float D_1CFD98[];

void func_0ADE80(int a0, int a1)
{
    int v0 = D_1CFBE0[a0];
    if (v0 != 0) {
        if (v0 != a1) {
            if (D_1CFD98[a0] == 0.0f) {
                D_1CFD98[a0] = 1.0f;
            }
        }
    }
    D_1CFBE0[a0] = a1;
}
