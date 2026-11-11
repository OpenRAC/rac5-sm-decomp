typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_00363BA8;
extern float D_00363BB8;

extern float powf(float a, float b);

void func_148F58(void *self, int flag)
{
    Rec *r;
    float *pf;

    if (flag == 0xFFFF && self != 0) {
        r = &D_00363BA8;
        pf = &D_00363BB8;
        D_00363BA8.i0 = 0;
        r->i4 = 0;
        r->i8 = 0;
        r->fC = 1.0f;
        *pf = powf(0.98f, 1.0f);
    }
}
