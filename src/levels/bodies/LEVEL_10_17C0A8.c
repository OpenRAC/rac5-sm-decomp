/* LEVEL_10:0x17C0A8 -- resets the level's record and latches two flags. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_39F350;
extern float D_39F360;

extern float func_000000(float value);

void func_17C0A8(Rec *a0, int a1)
{
    float *pf;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_39F350.f_0C = 1.0f;
            D_39F350.i_00 = 0;
            D_39F350.i_08 = 0;
            D_39F350.i_04 = 0;
            pf = &D_39F360;
            *pf = func_000000(-0.66666667f);
        }
    }
}
