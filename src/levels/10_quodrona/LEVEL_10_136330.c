typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_0039AB40;
extern Rec *D_0039AB50;
extern char D_00223E40;
extern Rec *func_10D660(void *);

void func_136330(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_0039AB50;

        D_0039AB40.f = 1.0f;
        D_0039AB40.i0 = 0;
        D_0039AB40.i2 = 0;
        D_0039AB40.i1 = 0;
        *p = func_10D660(&D_00223E40);
    }
}
