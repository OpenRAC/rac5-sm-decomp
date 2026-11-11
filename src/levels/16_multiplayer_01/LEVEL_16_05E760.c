/* LEVEL_16:0x05E760 -- placement copy of LEVEL_01_06DD50.c. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001EB938;
extern float D_001EB948;
extern float D_001EB94C;

extern float powf(float a0, float a1);

void func_05E760(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_001EB948;
            float *q = &D_001EB94C;
            D_001EB938.f_00 = 0;
            D_001EB938.f_04 = 0;
            D_001EB938.f_08 = 0;
            D_001EB938.f_0C = 1.0f;
            *p = powf(0.98f, 1.0f);
            *q = powf(0.98f, 1.0f);
        }
    }
}
