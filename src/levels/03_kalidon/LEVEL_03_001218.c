/* LEVEL_03.REL:001218 -- returns the float at 0x10C of the object held by
   D_002078C8. */
typedef struct {
    char pad_00[0x10C];
    float f_10C;
} Obj;

extern Obj *D_002078C8;

float func_001218(void)
{
    return D_002078C8->f_10C;
}
