/* LEVEL_05:0011F0 -- returns the float at 0x10C of the object held by
   D_001DE5C8. */
typedef struct {
    char pad_10C[0x10C];
    float f_10C;
} Obj;

extern Obj *D_001DE5C8;

float func_0011F0(void)
{
    return D_001DE5C8->f_10C;
}
