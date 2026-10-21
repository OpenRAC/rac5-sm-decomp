/* LEVEL_08:158528 -- resets the global record and stores the float the
   erased routine returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003E0D18;
extern float D_003E0D28;

extern float func_000000(float a0, float a1);

void func_158528(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_003E0D28;

            D_003E0D18.f_00 = 0;
            D_003E0D18.f_04 = 0;
            D_003E0D18.f_08 = 0;
            D_003E0D18.f_0C = 1.0f;
            *p = func_000000(0.98f, 1.0f);
        }
    }
}
