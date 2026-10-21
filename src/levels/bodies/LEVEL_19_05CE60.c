/* LEVEL_19:0x05CE60 -- resets the global record D_1EBA70 and stores the
   result of the erased routine into D_1EBA80. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_1EBA70;
extern float D_1EBA80;
extern float func_000000(float f);

void func_05CE60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_1EBA80;
            D_1EBA70.f_0C = 1.0f;
            D_1EBA70.i_00 = 0;
            D_1EBA70.i_08 = 0;
            D_1EBA70.i_04 = 0;
            *dst = func_000000(-0.5f);
        }
    }
}
