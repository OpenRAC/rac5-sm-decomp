/* LEVEL_08:0x135058 -- transmet un triplet et une valeur au service de
   calcul, la valeur en quatrieme position flottante. */

extern void func_134F48(float x, float y, float z, float v);

void func_135058(void *a0, float *a1, float v)
{
    func_134F48(a1[0], a1[1], a1[2], v);
}
