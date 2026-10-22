/* LEVEL_16:12AE00 -- resets the global record and stores the float the
   erased routine returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E2B20;
extern float D_002E2B30;

extern float func_000000(float a0, float a1);

void func_12AE00(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_002E2B30;

            D_002E2B20.f_00 = 0;
            D_002E2B20.f_04 = 0;
            D_002E2B20.f_08 = 0;
            D_002E2B20.f_0C = 1.0f;
            *p = func_000000(0.98f, 1.0f);
        }
    }
}
