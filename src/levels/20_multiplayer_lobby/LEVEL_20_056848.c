/* LEVEL_20.REL:0x056848 -- prepares the object then records the sampled delay. */
typedef struct {
    char pad0[0xF08];
    float f_F08;
} Obj;

void func_032060(Obj *a0);
float func_000FA0(void);

void func_056848(Obj *a0)
{
    func_032060(a0);
    a0->f_F08 = func_000FA0();
}
