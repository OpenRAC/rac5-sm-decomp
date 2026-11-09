/* LEVEL_01:0x0A01B0 -- keeps the larger of a slot value and an argument, stored back into the slot. */
extern float D_0029C698[];

static __inline__ float *pick_max(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_0A01B0(float value, int index)
{
    D_0029C698[index * 0x47] = *pick_max(&D_0029C698[index * 0x47], &value);
}
