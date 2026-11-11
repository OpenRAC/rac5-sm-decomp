/* LEVEL_08.REL:003BB0 -- stores the argument at 0x154 of the object held by
   D_00237DD4. */
typedef struct {
    char pad_00[0x154];
    float f_154;
} Obj;

extern Obj *D_00237DD4;

void func_003BB0(float a)
{
    D_00237DD4->f_154 = a;
}
