/* LEVEL_01:0x1460A8 -- resets the level's record and latches a flag. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_391A08;
extern float D_391A18;

extern float func_000000(float alpha, float beta);

void func_1460A8(Rec *a0, int a1)
{
    float *pf;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_391A08.i_00 = 0;
            D_391A08.i_04 = 0;
            D_391A08.i_08 = 0;
            D_391A08.f_0C = 1.0f;
            pf = &D_391A18;
            *pf = func_000000(0.98f, 1.0f);
        }
    }
}
