/* LEVEL_01:06AEB8 -- resets the global record and stores the float the
   erased routine returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00239220;
extern float D_00239230;

extern float func_000000(float a0);

void func_06AEB8(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_00239230;

            D_00239220.f_00 = 0;
            D_00239220.f_04 = 0;
            D_00239220.f_08 = 0;
            D_00239220.f_0C = 1.0f;
            *p = func_000000(-0.5f);
        }
    }
}
