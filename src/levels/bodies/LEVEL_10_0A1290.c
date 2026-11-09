/* LEVEL_10:0x0A1290 -- placement copy of LEVEL_01_0A01B0.c: keeps the larger of a slot value and an argument, stored back into the slot. */
extern float D_002A5A98[];

static __inline__ float *pick_max(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_0A1290(float value, int index)
{
    D_002A5A98[index * 0x47] = *pick_max(&D_002A5A98[index * 0x47], &value);
}
