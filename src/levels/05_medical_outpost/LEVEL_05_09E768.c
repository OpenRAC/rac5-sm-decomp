/* LEVEL_05:0x09E768 -- placement copy of LEVEL_01_0A01B0.c: keeps the larger of a slot value and an argument, stored back into the slot. */
extern float D_00288558[];

static __inline__ float *pick_max(float *a, float *b)
{
    return (*a < *b) ? b : a;
}

void func_09E768(float value, int index)
{
    D_00288558[index * 0x47] = *pick_max(&D_00288558[index * 0x47], &value);
}
