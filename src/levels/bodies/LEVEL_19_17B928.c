/* LEVEL_19:0x17B928 -- fires the timer callback once the value passes 2.5. */
typedef struct {
    char pad_00[0x70];
    float f_70;
} Obj;

extern void func_06F9A8(Obj *o, int a);

void func_17B928(Obj *a0)
{
    if (a0->f_70 > 2.5f)
        func_06F9A8(a0, 1);
}
