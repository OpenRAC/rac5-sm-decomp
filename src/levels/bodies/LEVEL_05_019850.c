/* LEVEL_05:0x019850 -- copies the source record and its flag into the global. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
} Rec;

extern Rec D_0021B8B0;

void func_019850(Rec *src, float x)
{
    D_0021B8B0.f_00 = src->f_00;
    D_0021B8B0.f_04 = src->f_04;
    D_0021B8B0.f_08 = src->f_08;
    D_0021B8B0.f_0C = src->f_0C;
    D_0021B8B0.f_10 = x;
}
