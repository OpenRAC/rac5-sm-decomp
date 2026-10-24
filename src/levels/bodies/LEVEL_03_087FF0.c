/* LEVEL_03:0x087FF0 -- returns the negated value of the float field at
   offset 0x30 when func_02A1E8(4) reports true, the plain value otherwise. */
typedef struct {
    char pad_00[0x30];
    float f_30;
} Obj;

extern int func_02A1E8(int a0);

float func_087FF0(Obj *a0)
{
    if (func_02A1E8(4)) {
        return -a0->f_30;
    }
    return a0->f_30;
}
