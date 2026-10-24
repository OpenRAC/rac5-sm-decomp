/* LEVEL_20:0x012B20 -- samples one value through the helper with a mode word
   and publishes it to the object field and to the optional out-parameter. */
typedef struct {
    float f0;
    float f1;
    float f2;
    float f3;
} Tmp;

typedef struct {
    char pad0[4];
    float f4;
} ObjA;

typedef struct {
    float f0;
} ObjB;

extern int func_012B78(ObjA *, Tmp *, int, int, int);

void func_012B20(ObjA *a0, ObjB *a1, int a2)
{
    Tmp t;

    if (func_012B78(a0, &t, a2, 0x38, 0)) {
        a0->f4 = t.f0;
    }
    if (a1 != 0) {
        a1->f0 = t.f0;
    }
}
