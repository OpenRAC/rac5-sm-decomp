/* LEVEL_03:0x069840 -- resets the level's record and latches two flags. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_2540A0;
extern float D_2540B0;

extern float func_000000(float value);

void func_069840(Rec *a0, int a1)
{
    float *pf;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2540A0.f_0C = 1.0f;
            D_2540A0.i_00 = 0;
            D_2540A0.i_08 = 0;
            D_2540A0.i_04 = 0;
            pf = &D_2540B0;
            *pf = func_000000(-0.5f);
        }
    }
}
