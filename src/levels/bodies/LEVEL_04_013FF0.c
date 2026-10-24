/* LEVEL_04:0x013FF0 -- samples one value through the helper and publishes it
   to the object field and to the optional out-parameter. */
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

extern int func_014040(ObjA *, Tmp *);

void func_013FF0(ObjA *a0, ObjB *a1)
{
    Tmp t;

    if (func_014040(a0, &t)) {
        a0->f4 = t.f0;
    }
    if (a1 != 0) {
        a1->f0 = t.f0;
    }
}
