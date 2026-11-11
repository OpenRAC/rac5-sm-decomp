typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_003AC5C0;
extern Rec *D_003AC5D0;
extern char D_00233DD8;
extern Rec *func_10D110(void *);

void func_1368B8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_003AC5D0;

        D_003AC5C0.f = 1.0f;
        D_003AC5C0.i0 = 0;
        D_003AC5C0.i2 = 0;
        D_003AC5C0.i1 = 0;
        *p = func_10D110(&D_00233DD8);
    }
}
