/* LEVEL_03:0x09FF38 -- placement copy of LEVEL_01_0A01B0.c: keeps the larger of a slot value and an argument, stored back into the slot. */
extern float D_002B7518[];

static __inline__ float *pick_max(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_09FF38(float value, int index)
{
    D_002B7518[index * 0x47] = *pick_max(&D_002B7518[index * 0x47], &value);
}
