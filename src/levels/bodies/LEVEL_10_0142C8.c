/* LEVEL_10.REL:0x0142C8 -- asks func_014320 for the current value of the first
   object and publishes it on the first and, when given, the second. */
typedef struct {
    char pad0[4];
    float f_04;
} Obj;

typedef struct {
    float f_00;
} Slot;

int func_014320(Obj *a0, float *out, int a2, int a3, int a4);

void func_0142C8(Obj *a0, Slot *a1, int a2)
{
    float t;

    if (func_014320(a0, &t, a2, 0x38, 0))
        a0->f_04 = t;
    if (a1)
        a1->f_00 = t;
}
