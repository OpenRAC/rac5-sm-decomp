/* LEVEL_24:0x119FA0 -- placement copy of LEVEL_01_123DC8.c: passes a triple and an additional value to the
   calculation routine, with the value in the fourth float position. */

extern void func_119EB0(void *out, float x, float y, float z, float v);

void func_119FA0(void *a0, float *a1, float v)
{
    func_119EB0(a0, a1[0], a1[1], a1[2], v);
}
