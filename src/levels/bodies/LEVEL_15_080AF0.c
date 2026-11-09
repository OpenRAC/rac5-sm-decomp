/* LEVEL_15:0x080AF0 -- placement copy of LEVEL_01_0A01B0.c: keeps the larger of a slot value and an argument, stored back into the slot. */
extern float D_001B46D8[];

static __inline__ float *pick_max(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_080AF0(float value, int index)
{
    D_001B46D8[index * 0x47] = *pick_max(&D_001B46D8[index * 0x47], &value);
}
