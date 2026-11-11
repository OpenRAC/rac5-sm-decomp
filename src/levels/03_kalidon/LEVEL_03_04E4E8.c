/* LEVEL_03.REL:04E4E8 -- caps the rate at 0x240, calls func_046960 and keeps
   the old value of 0xD0 at 0x26C. */
typedef struct {
    char pad_00[0xD0];
    float f_D0;
    char pad_D4[0x16C];
    float f_240;
    char pad_244[0x28];
    float f_26C;
} Obj;

extern void func_046960(Obj *a0);

void func_04E4E8(Obj *a0)
{
    float old = a0->f_D0;

    a0->f_240 = 0.05000000447034836f;
    a0->f_26C = old;
    func_046960(a0);
}
