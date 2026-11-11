/* LEVEL_17:0x07A1E8 -- returns the negated value of the float field at
   offset 0x30 when func_0277B8(4) reports true, the plain value otherwise. */
typedef struct {
    char pad_00[0x30];
    float f_30;
} Obj;

extern int func_0277B8(int a0);

float func_07A1E8(Obj *a0)
{
    if (func_0277B8(4)) {
        return -a0->f_30;
    }
    return a0->f_30;
}
