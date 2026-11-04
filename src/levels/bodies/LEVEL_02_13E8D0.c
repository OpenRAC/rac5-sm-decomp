typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_003A8C40;
extern Rec *D_003A8C50;
extern char D_0022FEB8;
extern Rec *func_115790(void *);

void func_13E8D0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_003A8C50;

        D_003A8C40.f = 1.0f;
        D_003A8C40.i0 = 0;
        D_003A8C40.i2 = 0;
        D_003A8C40.i1 = 0;
        *p = func_115790(&D_0022FEB8);
    }
}
