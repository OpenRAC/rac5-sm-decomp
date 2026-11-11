/* LEVEL_17.REL:003758 -- stores the argument at 0x154 of the object held by
   D_0018E2DC. */
typedef struct {
    char pad_00[0x154];
    float f_154;
} Obj;

extern Obj *D_0018E2DC;

void func_003758(float a)
{
    D_0018E2DC->f_154 = a;
}
