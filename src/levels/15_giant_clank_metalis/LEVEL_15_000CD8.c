/* LEVEL_15:0x000CD8 -- returns a float field of the object held by the
   global pointer D_143EB0. */
typedef struct {
    char pad_10C[0x10C];
    float f_10C;
} Obj;

extern Obj *D_143EB0;

float func_000CD8(void)
{
    return D_143EB0->f_10C;
}
