/* LEVEL_15:0x0FDC00 -- adds the three floats of the second argument to the
   three floats the first record keeps at +0x10. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
} Rec;

void func_0FDC00(Rec *a0, float *a1)
{
    float *p = (float *)((char *)a0 + 0x10);
    a0->f_10 += a1[0];
    p[1] += a1[1];
    p[2] += a1[2];
}
