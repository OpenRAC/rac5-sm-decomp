/* LEVEL_02.REL:054FA0 -- caps the rate at 0x240, keeps the old value of 0xD0
   at 0x26C and calls func_04D628. */
typedef struct {
    char pad_00[0xD0];
    float f_D0;
    char pad_D4[0x16C];
    float f_240;
    char pad_244[0x28];
    float f_26C;
} Obj;

extern void func_04D628(Obj *a0);

void func_054FA0(Obj *a0)
{
    float old = a0->f_D0;

    a0->f_240 = 0.05000000447034836f;
    a0->f_26C = old;
    func_04D628(a0);
}
