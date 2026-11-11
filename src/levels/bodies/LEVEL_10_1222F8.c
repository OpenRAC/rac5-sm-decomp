/* LEVEL_10:0x1222F8 -- placement copy of LEVEL_01_123DC8.c: passes a triple and an additional value to the
   calculation routine, with the value in the fourth float position. */

extern void func_122208(void *out, float x, float y, float z, float v);

void func_1222F8(void *a0, float *a1, float v)
{
    func_122208(a0, a1[0], a1[1], a1[2], v);
}
