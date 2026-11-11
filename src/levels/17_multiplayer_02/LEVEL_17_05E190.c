/* LEVEL_17:0x05E190 -- placement copy of LEVEL_01_06DD50.c. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001DCC38;
extern float D_001DCC48;
extern float D_001DCC4C;

extern float powf(float a0, float a1);

void func_05E190(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_001DCC48;
            float *q = &D_001DCC4C;
            D_001DCC38.f_00 = 0;
            D_001DCC38.f_04 = 0;
            D_001DCC38.f_08 = 0;
            D_001DCC38.f_0C = 1.0f;
            *p = powf(0.98f, 1.0f);
            *q = powf(0.98f, 1.0f);
        }
    }
}
