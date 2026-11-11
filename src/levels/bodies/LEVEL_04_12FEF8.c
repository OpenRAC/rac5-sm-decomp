/* LEVEL_04:0x12FEF8 -- placement copy of LEVEL_01_123DC8.c: passes a triple and an additional value to the
   calculation routine, with the value in the fourth float position. */

extern void func_12FE08(void *out, float x, float y, float z, float v);

void func_12FEF8(void *a0, float *a1, float v)
{
    func_12FE08(a0, a1[0], a1[1], a1[2], v);
}
