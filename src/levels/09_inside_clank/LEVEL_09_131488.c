typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_00378EC0;
extern Rec *D_00378ED0;
extern char D_002049F8;
extern Rec *func_108838(void *);

void func_131488(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_00378ED0;

        D_00378EC0.f = 1.0f;
        D_00378EC0.i0 = 0;
        D_00378EC0.i2 = 0;
        D_00378EC0.i1 = 0;
        *p = func_108838(&D_002049F8);
    }
}
