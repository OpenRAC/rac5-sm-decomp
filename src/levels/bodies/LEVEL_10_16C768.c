typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_0039F140;
extern Rec *D_0039F150;
extern char D_002298A0;
extern Rec *func_10D660(void *);

void func_16C768(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_0039F150;

        D_0039F140.f = 1.0f;
        D_0039F140.i0 = 0;
        D_0039F140.i2 = 0;
        D_0039F140.i1 = 0;
        *p = func_10D660(&D_002298A0);
    }
}
