/* LEVEL_22.REL:0795B0 -- returns the field +0x30 of the record, negated when
   the level's mode query answers true. */
typedef struct {
    char pad[0x30];
    float f_30;
} Obj;

extern int func_024988(int a0);

float func_0795B0(Obj *a0)
{
    if (func_024988(4) != 0)
        return -a0->f_30;
    return a0->f_30;
}
