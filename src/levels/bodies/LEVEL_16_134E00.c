typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_002E2BB0;
extern float D_002E2BC0;

extern float powf(float a, float b);

void func_134E00(void *self, int flag)
{
    Rec *r;
    float *pf;

    if (flag == 0xFFFF && self != 0) {
        r = &D_002E2BB0;
        pf = &D_002E2BC0;
        D_002E2BB0.i0 = 0;
        r->i4 = 0;
        r->i8 = 0;
        r->fC = 1.0f;
        *pf = powf(0.98f, 1.0f);
    }
}
