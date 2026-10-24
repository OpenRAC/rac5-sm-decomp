/* LEVEL_19.REL:0x16B908 -- runs the timer down and releases it once spent. */
typedef struct {
    char pad0[0x70];
    float f_70;
} Obj;

void func_06F9A8(Obj *a0, int a1);

void func_16B908(Obj *a0, float x)
{
    float left = a0->f_70 - x;

    a0->f_70 = left;
    if (left <= 0.0f)
        func_06F9A8(a0, 1);
}
