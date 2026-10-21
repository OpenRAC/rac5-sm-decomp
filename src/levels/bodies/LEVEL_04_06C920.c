/* LEVEL_04:0x06C920 -- initialises the level's timer record when the caller
   asks for a fresh one (a1 == 0xFFFF) and a valid record is supplied. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00253A30;
extern float D_00253A40;

float func_000000(float a0);

void func_06C920(void *a0, int a1)
{
    float *p;

    if (a1 == 0xFFFF) {
        if (a0 == 0) {
            return;
        }
        p = &D_00253A40;
        D_00253A30.f3 = 1.0f;
        D_00253A30.i0 = 0;
        D_00253A30.i2 = 0;
        D_00253A30.i1 = 0;
        *p = func_000000(-0.5f);
    }
}
