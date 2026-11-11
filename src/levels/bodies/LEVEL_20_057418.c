/* LEVEL_20:0x057418 -- placement copy of LEVEL_01_06DD50.c. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00143268;
extern float D_00143278;
extern float D_0014327C;

extern float powf(float a0, float a1);

void func_057418(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_00143278;
            float *q = &D_0014327C;
            D_00143268.f_00 = 0;
            D_00143268.f_04 = 0;
            D_00143268.f_08 = 0;
            D_00143268.f_0C = 1.0f;
            *p = powf(0.98f, 1.0f);
            *q = powf(0.98f, 1.0f);
        }
    }
}
