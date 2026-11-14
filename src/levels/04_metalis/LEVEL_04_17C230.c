/* LEVEL_04:0x17C230 -- forwards its arguments plus the first two floats of a vector to the setter. */
extern void func_0320D8(void *a0, void *a1, void *a2, void *a3, void *t0, float f12, float f13);

void func_17C230(void *a0, void *a1, void *a2, float *a3, void *t0, void *t1)
{
    func_0320D8(a0, a1, a2, t0, t1, a3[0], a3[1]);
}
