/* LEVEL_17.REL:0x013B60 -- asks the sample routine for the current value and
   copies it into the two records the caller handed over. */
typedef struct {
    float f_00;
    float f_04;
} Rec;

int func_013BB0(Rec *a0, float *out);

void func_013B60(Rec *a0, Rec *a1)
{
    float v;

    if (func_013BB0(a0, &v)) a0->f_04 = v;
    if (a1) a1->f_00 = v;
}
