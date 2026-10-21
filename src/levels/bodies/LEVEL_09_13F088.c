typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_00379188;
extern float D_00379198;

extern float func_000000(float a, float b);

void func_13F088(void *self, int flag)
{
    Rec *r;
    float *pf;

    if (flag == 0xFFFF && self != 0) {
        r = &D_00379188;
        pf = &D_00379198;
        D_00379188.i0 = 0;
        r->i4 = 0;
        r->i8 = 0;
        r->fC = 1.0f;
        *pf = func_000000(0.98f, 1.0f);
    }
}
