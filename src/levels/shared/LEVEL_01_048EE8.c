/* LEVEL_01:0x048EE8 -- scales two of the caller's floats, folds them into the
   record, clears a word and sets a flag. */
typedef struct {
    char pad_00[0x30];
    float f_30;
    float f_34;
    float f_38;
    float f_3C;
    char pad_40[0x174];
    float f_1B4;
    float f_1B8;
    float f_1BC;
    int i_1C0;
} Big;

typedef struct {
    float x;
    float y;
    float z;
} V3;

void func_048EE8(Big *a0, V3 *a1, float scale)
{
    float *p = &a0->f_30;
    float *q = &a0->f_1B4;

    a0->f_1B4 = a1->x * scale;
    a0->f_1BC = a1->z * scale;
    a0->f_30 = a0->f_30 + a0->f_1B4;
    a0->i_1C0 = 0;
    p[1] = p[1] + q[1];
    p[2] = p[2] + q[2];
    a0->f_3C = 1.0f;
}
