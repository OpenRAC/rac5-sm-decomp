/* LEVEL_01:0x123DC8 -- transmet un triplet et une valeur au service de
   calcul, la valeur en quatrieme position flottante. */

extern void func_123CB8(float x, float y, float z, float v);

void func_123DC8(void *a0, float *a1, float v)
{
    func_123CB8(a1[0], a1[1], a1[2], v);
}
