/* candidate: LEVEL_01.REL:0x16F038 -- variant b */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f;
} Rec;

extern Rec D_395E18;
extern Rec *D_395E28;
extern char D_2209E8;
extern Rec *func_10F448(void *);

void func_16F038(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        Rec **p = &D_395E28;

        D_395E18.f = 1.0f;
        D_395E18.i0 = 0;
        D_395E18.i2 = 0;
        D_395E18.i1 = 0;
        *p = func_10F448(&D_2209E8);
    }
}
