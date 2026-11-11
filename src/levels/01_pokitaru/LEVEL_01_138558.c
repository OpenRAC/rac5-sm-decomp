typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_00391740;
extern Rec *D_00391750;
extern char D_0021AE68;
extern Rec *func_10F448(void *);

void func_138558(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_00391750;

        D_00391740.f = 1.0f;
        D_00391740.i0 = 0;
        D_00391740.i2 = 0;
        D_00391740.i1 = 0;
        *p = func_10F448(&D_0021AE68);
    }
}
