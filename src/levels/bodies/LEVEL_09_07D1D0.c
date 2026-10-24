/* LEVEL_09:0x07D1D0 -- hands the caller's handle and the three-frame of the
   argument record to the transform. */
typedef struct {
    char pad0[0x30];
    float f30;
    float f34;
    float f38;
} Rec;

extern void func_11F2C8(int, float, float, float);

void func_07D1D0(Rec *a0, int a1)
{
    func_11F2C8(a1, a0->f30, a0->f34, a0->f38);
}
