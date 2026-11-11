/* LEVEL_04:0x1A73B0 -- drains the frame field and fires the callback the
   moment it reaches zero. */
typedef struct {
    char pad0[0x70];
    float f70;
} Obj;

extern void func_07FAE8(Obj *, int);

void func_1A73B0(Obj *a0, float f12)
{
    a0->f70 = a0->f70 - f12;
    if (a0->f70 <= 0.0f) {
        func_07FAE8(a0, 1);
    }
}
