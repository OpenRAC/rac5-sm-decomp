typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_0037D600;
extern Rec *D_0037D610;
extern char D_00209CC0;
extern Rec *func_10B888(void *);

void func_133EC0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_0037D610;

        D_0037D600.f = 1.0f;
        D_0037D600.i0 = 0;
        D_0037D600.i2 = 0;
        D_0037D600.i1 = 0;
        *p = func_10B888(&D_00209CC0);
    }
}
