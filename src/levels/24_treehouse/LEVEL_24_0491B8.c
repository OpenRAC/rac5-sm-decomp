/* 0491B8 -- constant one ULP up. */
typedef struct {
    char pad_00[0xD0];
    float f_D0;
    char pad_D4[0x16C];
    float f_240;
    char pad_244[0x28];
    float f_26C;
} Obj;
extern void func_041688(Obj *a0);
void func_0491B8(Obj *a0)
{
    float t = a0->f_D0;

    a0->f_240 = 0.050000004f;
    a0->f_26C = t;
    func_041688(a0);
}
