/* LEVEL_07:0x06B470 -- runs the setup and then stores the sampled level. */
typedef struct {
    char pad0[0xF08];
    float fF08;
} Obj;

extern void func_03C3B0(Obj *);
extern float func_0013E8();

void func_06B470(Obj *a0)
{
    func_03C3B0(a0);
    a0->fF08 = func_0013E8();
}
