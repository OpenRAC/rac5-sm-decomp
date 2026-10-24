/* LEVEL_05.REL:0x06B9B8 -- when the caller's handle is 0xFFFF and the object
   is set, restores the default record and resamples the two ratios. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00224F68;
extern float D_00224F78;
extern float D_00224F7C;

float func_000000(float a, float b);

void func_06B9B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p, *q;

            D_00224F68.f_00 = 0;
            D_00224F68.f_04 = 0;
            D_00224F68.f_08 = 0;
            D_00224F68.f_0C = 1.0f;
            p = &D_00224F78;
            q = &D_00224F7C;
            *p = func_000000(0.98f, 1.0f);
            *q = func_000000(0.98f, 1.0f);
        }
    }
}
