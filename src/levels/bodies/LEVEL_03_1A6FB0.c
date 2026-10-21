/* LEVEL_03:0x1A6FB0 -- initialises the global record D_003B2040 and stores
   the float returned by the erased routine in D_003B2050. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B2040;
extern float D_003B2050;
extern float func_000000(float a, float b);

void func_1A6FB0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *out = &D_003B2050;
            D_003B2040.f_00 = 0;
            D_003B2040.f_04 = 0;
            D_003B2040.f_08 = 0;
            D_003B2040.f_0C = 1.0f;
            *out = func_000000(1.05f, 1.0f);
        }
    }
}
