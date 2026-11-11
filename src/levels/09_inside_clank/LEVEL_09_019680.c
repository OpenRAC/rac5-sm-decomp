/* 019680 -- flag written before the last field. */
typedef struct { float f_00; float f_04; float f_08; float f_0C; float f_10; } Rec;
extern Rec D_00217330;
void func_019680(Rec *src, float x)
{
    D_00217330.f_00 = src->f_00;
    D_00217330.f_04 = src->f_04;
    D_00217330.f_08 = src->f_08;
    D_00217330.f_0C = src->f_0C;
    D_00217330.f_10 = x;
}
