/* LEVEL_23:0x096EF8 -- placement copy of LEVEL_01_0A01B0.c: keeps the larger of a slot value and an argument, stored back into the slot. */
extern float D_0026DAD8[];

static __inline__ float *pick_max(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_096EF8(float value, int index)
{
    D_0026DAD8[index * 0x47] = *pick_max(&D_0026DAD8[index * 0x47], &value);
}
