/* LEVEL_06:0x1B1EE0 -- initialises the level's timer record when the caller
   asks for a fresh one (a1 == 0xFFFF) and a valid record is supplied. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003850C0;
extern float D_003850D0;

float func_000000(float a0, float a1);

void func_1B1EE0(void *a0, int a1)
{
    float *p;

    if (a1 == 0xFFFF) {
        if (a0 == 0) {
            return;
        }
        p = &D_003850D0;
        D_003850C0.i0 = 0;
        D_003850C0.i1 = 0;
        D_003850C0.i2 = 0;
        D_003850C0.f3 = 1.0f;
        *p = func_000000(0.99f, 1.0f);
    }
}
