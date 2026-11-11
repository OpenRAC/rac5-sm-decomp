/* LEVEL_07:001400 -- returns the float at 0xFC of the object held by the
   global pointer D_00203548. */
typedef struct {
    char pad_FC[0xFC];
    float f_FC;
} Obj;

extern Obj *D_00203548;

float func_001400(void)
{
    return D_00203548->f_FC;
}
