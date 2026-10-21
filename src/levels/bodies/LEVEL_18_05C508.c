/* LEVEL_18:0x05C508 -- resets the global record D_1EBC70 and stores the
   result of the erased routine into D_1EBC80. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_1EBC70;
extern float D_1EBC80;
extern float func_000000(float f);

void func_05C508(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_1EBC80;
            D_1EBC70.f_0C = 1.0f;
            D_1EBC70.i_00 = 0;
            D_1EBC70.i_08 = 0;
            D_1EBC70.i_04 = 0;
            *dst = func_000000(-0.5f);
        }
    }
}
