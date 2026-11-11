/* LEVEL_09.REL:0x067AA0 -- answers the excess of the object's reading over the
   global offset. */
typedef struct {
    char pad0[0xF60];
    float f_F60;
} Obj;

extern float D_001F7A48;

float func_067AA0(Obj *a0)
{
    return a0->f_F60 - D_001F7A48;
}
