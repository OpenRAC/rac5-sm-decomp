typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_002E2CB0;
extern float D_002E2CC0;

extern float func_000000(float a, float b);

void func_12BA28(void *self, int flag)
{
    Rec *r;
    float *pf;

    if (flag == 0xFFFF && self != 0) {
        r = &D_002E2CB0;
        pf = &D_002E2CC0;
        D_002E2CB0.i0 = 0;
        r->i4 = 0;
        r->i8 = 0;
        r->fC = 1.0f;
        *pf = func_000000(0.98f, 1.0f);
    }
}
