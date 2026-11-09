/* LEVEL_18:0x17ADF0 -- placement copy of LEVEL_07_1C39C0.c: for selector 0xFFFF with a non-null object, resets a global record, stores powf(0.98, 1.0) and 2.25 into two globals. */
typedef struct {
    int w0;
    int w4;
    int w8;
    float wC;
} Rec16b;

extern Rec16b D_002E5A60;
extern float D_002E5A70;
extern float D_002E5A74;
extern float powf(float x, float y);

void func_17ADF0(char *a0, int a1)
{
    float *dst;
    Rec16b *p;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_002E5A60.w0 = 0;
    p = &D_002E5A60;
    p->w4 = 0;
    p->w8 = 0;
    p->wC = 1.0f;
    dst = &D_002E5A70;
    *dst = powf(0.98f, 1.0f);
    D_002E5A74 = 2.25f;
}
