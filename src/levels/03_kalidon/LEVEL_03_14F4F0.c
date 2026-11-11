typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_003AC978;
extern float D_003AC988;

extern float powf(float a, float b);

void func_14F4F0(void *self, int flag)
{
    Rec *r;
    float *pf;

    if (flag == 0xFFFF && self != 0) {
        r = &D_003AC978;
        pf = &D_003AC988;
        D_003AC978.i0 = 0;
        r->i4 = 0;
        r->i8 = 0;
        r->fC = 1.0f;
        *pf = powf(0.98f, 1.0f);
    }
}
