typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_0035D600;
extern Rec *D_0035D610;
extern char D_001EBAF8;
extern Rec *func_106488(void *);

void func_12DF88(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_0035D610;

        D_0035D600.f = 1.0f;
        D_0035D600.i0 = 0;
        D_0035D600.i2 = 0;
        D_0035D600.i1 = 0;
        *p = func_106488(&D_001EBAF8);
    }
}
