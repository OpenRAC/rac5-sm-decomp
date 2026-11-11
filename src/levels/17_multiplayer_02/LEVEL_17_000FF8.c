/* LEVEL_17.REL:000FF8 -- returns the float at 0xFC of the object held by
   D_0018E2CC. */
typedef struct {
    char pad_00[0xFC];
    float f_FC;
} Obj;

extern Obj *D_0018E2CC;

float func_000FF8(void)
{
    return D_0018E2CC->f_FC;
}
