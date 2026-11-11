/* LEVEL_16.REL:037CB0 -- returns the float at 0x568 when func_037C60
   reports true, zero otherwise. */
typedef struct {
    char pad_00[0x568];
    float f_568;
} Obj;

extern int func_037C60(Obj *a0);

float func_037CB0(Obj *a0)
{
    return func_037C60(a0) ? a0->f_568 : 0.0f;
}
