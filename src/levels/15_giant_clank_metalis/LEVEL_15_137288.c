/* LEVEL_15:0x137288 -- adds an integer to a stored float, caps the sum at 100.0, and stores it back. */

struct Obj {
    char pad_00[0x2C];
    float f_2C;
};

extern struct Obj D_002F4F88;

static __inline__ float *minref(float *a, float *b)
{
    if (*a < *b) {
        return a;
    }
    return b;
}

void func_137288(int a0)
{
    float x;
    float y;
    float *p;

    x = D_002F4F88.f_2C + (float)a0;
    y = 100.0f;
    p = minref(&x, &y);
    D_002F4F88.f_2C = *p;
}
