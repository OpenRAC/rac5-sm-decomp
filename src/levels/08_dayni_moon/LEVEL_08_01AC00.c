/* LEVEL_08:0x01AC00 -- copies the source record and its flag into the global. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
} Rec;

extern Rec D_0027EE30;

void func_01AC00(Rec *src, float x)
{
    D_0027EE30.f_00 = src->f_00;
    D_0027EE30.f_04 = src->f_04;
    D_0027EE30.f_08 = src->f_08;
    D_0027EE30.f_0C = src->f_0C;
    D_0027EE30.f_10 = x;
}
