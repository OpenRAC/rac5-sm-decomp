/* LEVEL_15.REL:0x1385A8 -- applies the shared blend to the three components. */
extern void func_138568(float *, float *, float);

void func_1385A8(float *a0, float *a1, float a2)
{
    func_138568(a0, a1, a2);
    func_138568(a0 + 1, a1 + 1, a2);
    func_138568(a0 + 2, a1 + 2, a2);
}
