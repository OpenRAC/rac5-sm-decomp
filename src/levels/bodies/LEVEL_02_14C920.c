/* LEVEL_02:0x14C920 -- initialises a global record when the caller asks for
   it (a1 == 0xFFFF) and passes a valid owner pointer, then publishes the
   value the erased helper returns. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A8F28;
extern float D_003A8F38;
extern float func_000000(float, float);

void func_14C920(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003A8F38;

        D_003A8F28.f_00 = 0;
        D_003A8F28.f_04 = 0;
        D_003A8F28.f_08 = 0;
        D_003A8F28.f_0C = 1.0f;
        *dst = func_000000(0.98f, 1.0f);
    }
}
