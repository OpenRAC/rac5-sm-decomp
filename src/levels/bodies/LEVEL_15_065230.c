/* LEVEL_15:0x065230 -- forwards three fields of the first argument to
   func_0EAEC0, together with the second argument. */
typedef struct {
    char pad_00[0x30];
    float f_30;
    float f_34;
    float f_38;
} Rec;

extern void func_0EAEC0(Rec *a0, float a1, float a2, float a3);

void func_065230(Rec *a0, Rec *a1)
{
    func_0EAEC0(a1, a0->f_30, a0->f_34, a0->f_38);
}
