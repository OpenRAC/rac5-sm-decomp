/* LEVEL_18:0x013BD0 -- asks func_013C20 for a float; the value reaches the
   first caller's record and, when the second one is not null, that one too. */
typedef struct {
    float f_00;
    float f_04;
} Rec;

extern int func_013C20(Rec *a, float *out);

void func_013BD0(Rec *a0, Rec *a1)
{
    float v;
    if (func_013C20(a0, &v)) {
        a0->f_04 = v;
    }
    if (a1 != 0) {
        a1->f_00 = v;
    }
}
