/* LEVEL_15:0x1396C0 -- calls the helper three times, on the three
   consecutive floats of the two records. */
extern void func_139680(float *a0, float *a1, float a2);

void func_1396C0(float *a0, float *a1, float a2)
{
    func_139680(a0, a1, a2);
    func_139680(a0 + 1, a1 + 1, a2);
    func_139680(a0 + 2, a1 + 2, a2);
}
