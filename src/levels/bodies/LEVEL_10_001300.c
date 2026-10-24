/* LEVEL_10:001300 -- returns the float at 0x100 of the object held by
   D_001F8248. */
typedef struct {
    char pad_100[0x100];
    float f_100;
} Obj;

extern Obj *D_001F8248;

float func_001300(void)
{
    return D_001F8248->f_100;
}
