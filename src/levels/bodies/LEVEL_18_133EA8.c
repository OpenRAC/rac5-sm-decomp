/* LEVEL_18:0x133EA8 -- resets the global record D_2E2F30 and stores the
   result of the erased routine into D_2E2F40. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_2E2F30;
extern float D_2E2F40;
extern float func_000000(float f0, float f1);

void func_133EA8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_2E2F40;
            D_2E2F30.i_00 = 0;
            D_2E2F30.i_04 = 0;
            D_2E2F30.i_08 = 0;
            D_2E2F30.f_0C = 1.0f;
            *dst = func_000000(0.98f, 1.0f);
        }
    }
}
