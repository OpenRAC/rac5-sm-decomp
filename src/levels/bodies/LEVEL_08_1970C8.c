/* LEVEL_08:0x1970C8 -- initialises the level's timer record when the caller
   asks for a fresh one (a1 == 0xFFFF) and a valid record is supplied. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003E6CD8;
extern float D_003E6CE8;

float func_000000(float a0);

void func_1970C8(void *a0, int a1)
{
    float *p;

    if (a1 == 0xFFFF) {
        if (a0 == 0) {
            return;
        }
        p = &D_003E6CE8;
        D_003E6CD8.f3 = 1.0f;
        D_003E6CD8.i0 = 0;
        D_003E6CD8.i2 = 0;
        D_003E6CD8.i1 = 0;
        *p = func_000000(-0.6666667f);
    }
}
