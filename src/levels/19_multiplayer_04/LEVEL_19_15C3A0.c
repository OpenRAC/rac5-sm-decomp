/* LEVEL_19:0x15C3A0 -- fills two output vectors with the object's position (+0x30) offset by two constant vectors and reports success. */
extern float D_001D6340[3];
extern float D_001D6350[3];

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

int func_15C3A0(float *out0, float *out1, char *object)
{
    Add3(out0, (float *)(object + 0x30), D_001D6340);
    Add3(out1, (float *)(object + 0x30), D_001D6350);
    return 1;
}
