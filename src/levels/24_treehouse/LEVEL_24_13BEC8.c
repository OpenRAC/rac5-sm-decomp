typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_0035D888;
extern float D_0035D898;

extern float powf(float a, float b);

void func_13BEC8(void *self, int flag)
{
    Rec *r;
    float *pf;

    if (flag == 0xFFFF && self != 0) {
        r = &D_0035D888;
        pf = &D_0035D898;
        D_0035D888.i0 = 0;
        r->i4 = 0;
        r->i8 = 0;
        r->fC = 1.0f;
        *pf = powf(0.98f, 1.0f);
    }
}
