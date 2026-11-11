/* LEVEL_01:0x123DC8 -- passes a triple and an additional value to the
   calculation routine, with the value in the fourth float position. */

extern void func_123CB8(void *out, float x, float y, float z, float v);

void func_123DC8(void *a0, float *a1, float v)
{
    func_123CB8(a0, a1[0], a1[1], a1[2], v);
}
