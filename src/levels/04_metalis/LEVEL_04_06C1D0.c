/* LEVEL_04.REL:0x06C1D0 -- prepares the object then records the sampled delay. */
typedef struct {
    char pad0[0xF08];
    float f_F08;
} Obj;

void func_03D800(Obj *a0);
float func_0011F0(void);

void func_06C1D0(Obj *a0)
{
    func_03D800(a0);
    a0->f_F08 = func_0011F0();
}
