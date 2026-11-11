/* LEVEL_18:0x102188 -- placement copy of LEVEL_01_123DC8.c: passes a triple and an additional value to the
   calculation routine, with the value in the fourth float position. */

extern void func_102098(void *out, float x, float y, float z, float v);

void func_102188(void *a0, float *a1, float v)
{
    func_102098(a0, a1[0], a1[1], a1[2], v);
}
