/* LEVEL_10:0x1B7AD0 -- resets the global record D_003A09B8, squares the
   global float D_00211AB4 into D_003A09C8 and stores the float returned by
   the erased routine in D_003A09CC. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A09B8;
extern float D_003A09C8;
extern float D_003A09CC;
extern float D_00211AB4;
extern float func_000000(float a, float b);

void func_1B7AD0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float v = D_00211AB4 * D_00211AB4;
            float *out = &D_003A09CC;
            D_003A09B8.f_00 = 0;
            D_003A09B8.f_04 = 0;
            D_003A09B8.f_08 = 0;
            D_003A09B8.f_0C = 1.0f;
            D_003A09C8 = v;
            *out = func_000000(0.6f, 1.0f);
        }
    }
}
