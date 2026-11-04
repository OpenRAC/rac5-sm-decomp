typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_003B0C40;
extern Rec *D_003B0C50;
extern char D_00239960;
extern Rec *func_10D110(void *);

void func_16A578(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_003B0C50;

        D_003B0C40.f = 1.0f;
        D_003B0C40.i0 = 0;
        D_003B0C40.i2 = 0;
        D_003B0C40.i1 = 0;
        *p = func_10D110(&D_00239960);
    }
}
