/* LEVEL_09.REL:0013D8 -- returns the float at 0xF8 of the object held by
   D_001D9048. */
typedef struct {
    char pad_00[0xF8];
    float f_F8;
} Obj;

extern Obj *D_001D9048;

float func_0013D8(void)
{
    return D_001D9048->f_F8;
}
