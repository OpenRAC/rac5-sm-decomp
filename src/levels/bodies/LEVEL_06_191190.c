/* LEVEL_06.REL:0x191190 -- runs the timer down and releases it once spent. */
typedef struct {
    char pad0[0x70];
    float f_70;
} Obj;

void func_076268(Obj *a0, int a1);

void func_191190(Obj *a0, float x)
{
    float left = a0->f_70 - x;

    a0->f_70 = left;
    if (left <= 0.0f)
        func_076268(a0, 1);
}
