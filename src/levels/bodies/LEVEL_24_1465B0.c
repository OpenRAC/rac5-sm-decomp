typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_0035D938;
extern float D_0035D948;

extern float func_000000(float a, float b);

void func_1465B0(void *self, int flag)
{
    Rec *r;
    float *pf;

    if (flag == 0xFFFF && self != 0) {
        r = &D_0035D938;
        pf = &D_0035D948;
        D_0035D938.i0 = 0;
        r->i4 = 0;
        r->i8 = 0;
        r->fC = 1.0f;
        *pf = func_000000(0.98f, 1.0f);
    }
}
