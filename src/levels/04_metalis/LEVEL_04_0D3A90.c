typedef struct {
    int i0;
    int i4;
    int i8;
    float fC;
} Rec;

extern Rec D_00346900;
extern float D_00346910;
extern float D_0021C154;

void func_0D3A90(void *self, int flag)
{
    Rec *r;

    if (flag == 0xFFFF && self != 0) {
        r = &D_00346900;
        r->fC = 1.0f;
        D_00346900.i0 = 0;
        D_00346910 = D_0021C154;
        r->i8 = 0;
        r->i4 = 0;
    }
}
