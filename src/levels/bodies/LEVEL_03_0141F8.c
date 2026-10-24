/* LEVEL_03.REL:0x0141F8 -- asks func_014248 for the current value of the
   first object and publishes it on the first and, when given, the second. */
typedef struct {
    char pad0[4];
    float f_04;
} Obj;

typedef struct {
    float f_00;
} Slot;

int func_014248(Obj *a0, float *out);

void func_0141F8(Obj *a0, Slot *a1)
{
    float t;

    if (func_014248(a0, &t))
        a0->f_04 = t;
    if (a1)
        a1->f_00 = t;
}
