/* LEVEL_07:0x06BBC0 -- initialises the level's timer record when the caller
   asks for a fresh one (a1 == 0xFFFF) and a valid record is supplied. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0024EB20;
extern float D_0024EB30;

float func_000000(float a0);

void func_06BBC0(void *a0, int a1)
{
    float *p;

    if (a1 == 0xFFFF) {
        if (a0 == 0) {
            return;
        }
        p = &D_0024EB30;
        D_0024EB20.f3 = 1.0f;
        D_0024EB20.i0 = 0;
        D_0024EB20.i2 = 0;
        D_0024EB20.i1 = 0;
        *p = func_000000(-0.5f);
    }
}
