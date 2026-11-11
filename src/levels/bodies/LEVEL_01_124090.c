/* LEVEL_01:0x124090 -- placement copy of LEVEL_01_123DC8.c: passes a triple and an additional value to the
   calculation routine, with the value in the fourth float position. */

extern void func_123FA0(void *out, float x, float y, float z, float v);

void func_124090(void *a0, float *a1, float v)
{
    func_123FA0(a0, a1[0], a1[1], a1[2], v);
}
