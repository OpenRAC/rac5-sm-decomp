/* LEVEL_03:145538 -- resets the global record and stores the float the
   erased routine returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AC8D8;
extern float D_003AC8E8;

extern float func_000000(float a0, float a1);

void func_145538(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_003AC8E8;

            D_003AC8D8.f_00 = 0;
            D_003AC8D8.f_04 = 0;
            D_003AC8D8.f_08 = 0;
            D_003AC8D8.f_0C = 1.0f;
            *p = func_000000(0.98f, 1.0f);
        }
    }
}
