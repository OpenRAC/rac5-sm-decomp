typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_0037D4A0;
extern Rec *D_0037D4B0;
extern char D_00209988;
extern Rec *func_108838(void *);

void func_162938(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_0037D4B0;

        D_0037D4A0.f = 1.0f;
        D_0037D4A0.i0 = 0;
        D_0037D4A0.i2 = 0;
        D_0037D4A0.i1 = 0;
        *p = func_108838(&D_00209988);
    }
}
