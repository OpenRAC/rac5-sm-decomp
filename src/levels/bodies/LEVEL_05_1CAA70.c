/* LEVEL_05.REL:1CAA70 -- accumulates the global rate into the timer at 0x70
   and reports whether the timer went above five, in which case
   func_079CF8 is called with one. */
typedef struct {
    char pad_00[0x70];
    float f_70;
} Obj;

extern float D_0021D62C;

extern void func_079CF8(Obj *a0, int a1);

int func_1CAA70(Obj *a0)
{
    float f = a0->f_70 + D_0021D62C;

    a0->f_70 = f;
    if (f > 5.0f) {
        func_079CF8(a0, 1);
        return 1;
    }
    return 0;
}
