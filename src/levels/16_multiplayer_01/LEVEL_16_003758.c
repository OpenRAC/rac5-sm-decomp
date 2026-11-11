/* LEVEL_16:003758 -- stores the float argument at 0x154 of the object held by
   D_0019ACDC. */
typedef struct {
    char pad_154[0x154];
    float f_154;
} Obj;

extern Obj *D_0019ACDC;

void func_003758(float x)
{
    D_0019ACDC->f_154 = x;
}
