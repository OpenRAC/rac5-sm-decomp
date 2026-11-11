/* LEVEL_17:0x14F508 -- for selector 0xFFFF with a non-null object, resets a global record and stores powf(0.95, 1.0). */
typedef struct {
    int w0;
    int w4;
    int w8;
    float wC;
} Rec16;

extern Rec16 D_002D63A8;
extern float D_002D63B8;
extern float powf(float x, float y);

void func_14F508(char *a0, int a1)
{
    Rec16 *p;
    float *dst;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_002D63A8.w0 = 0;
    p = &D_002D63A8;
    p->w4 = 0;
    p->w8 = 0;
    p->wC = 1.0f;
    dst = &D_002D63B8;
    *dst = powf(0.95f, 1.0f);
}
