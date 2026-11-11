/* LEVEL_09.REL:0x014520 -- asks the sample routine for the current value and
   copies it into the two records the caller handed over. */
typedef struct {
    float f_00;
    float f_04;
} Rec;

int func_014578(Rec *a0, float *out, int a2, int a3, int a4);

void func_014520(Rec *a0, Rec *a1, int a2)
{
    float v;

    if (func_014578(a0, &v, a2, 0x38, 0)) a0->f_04 = v;
    if (a1) a1->f_00 = v;
}
