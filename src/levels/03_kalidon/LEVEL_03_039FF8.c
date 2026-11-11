/* LEVEL_03:0x039FF8 -- returns the slot at +0x568 when the check passes. */
typedef struct {
    char pad_00[0x568];
    float f_568;
} Obj;

extern int func_039FA8(Obj *o);

float func_039FF8(Obj *a0)
{
    if (func_039FA8(a0))
        return a0->f_568;
    return 0.0f;
}
