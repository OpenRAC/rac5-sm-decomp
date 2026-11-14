/* LEVEL_08:0x187920 -- placement copy of LEVEL_04_17C230.c: forwards its arguments plus the first two floats of a vector to the setter. */
extern void func_035350(void *a0, void *a1, void *a2, void *a3, void *t0, float f12, float f13);

void func_187920(void *a0, void *a1, void *a2, float *a3, void *t0, void *t1)
{
    func_035350(a0, a1, a2, t0, t1, a3[0], a3[1]);
}
