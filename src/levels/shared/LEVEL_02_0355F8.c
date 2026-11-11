/* LEVEL_02:0x0355F8 -- tells whether the scaled difference of two
   record pairs stays under a tenth of a millimetre. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
} Rec;

typedef struct {
    float f_00;
    float f_04;
} V2;

int func_0355F8(Rec *a0, Rec *a1, Rec *a2)
{
    V2 v;

    v.f_00 = a2->f_00 - a0->f_00;
    v.f_04 = a2->f_08 - a0->f_08;
    if (v.f_04 * a1->f_10 - v.f_00 * a1->f_14 <= 0.0001f) {
        return 1;
    }
    return 0;
}
