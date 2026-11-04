typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_003AB6E8;
extern Rec *D_003AB6F8;
extern char D_00235D98;
extern Rec *func_112498(void *);

void func_177300(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_003AB6F8;

        D_003AB6E8.f = 1.0f;
        D_003AB6E8.i0 = 0;
        D_003AB6E8.i2 = 0;
        D_003AB6E8.i1 = 0;
        *p = func_112498(&D_00235D98);
    }
}
