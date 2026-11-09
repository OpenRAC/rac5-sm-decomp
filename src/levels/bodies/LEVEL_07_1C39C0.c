/* LEVEL_07:0x1C39C0 -- for selector 0xFFFF with a non-null object, resets a global record, stores powf(0.98, 1.0) and 2.25 into two globals. */
typedef struct {
    int w0;
    int w4;
    int w8;
    float wC;
} Rec16b;

extern Rec16b D_003ADCB8;
extern float D_003ADCC8;
extern float D_003ADCCC;
extern float powf(float x, float y);

void func_1C39C0(char *a0, int a1)
{
    float *dst;
    Rec16b *p;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_003ADCB8.w0 = 0;
    p = &D_003ADCB8;
    p->w4 = 0;
    p->w8 = 0;
    p->wC = 1.0f;
    dst = &D_003ADCC8;
    *dst = powf(0.98f, 1.0f);
    D_003ADCCC = 2.25f;
}
