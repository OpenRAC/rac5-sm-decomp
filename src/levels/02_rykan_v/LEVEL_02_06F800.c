/* LEVEL_02.REL:0x06F800 -- refreshes the node then records the new level. */
typedef struct { char pad[0xF08]; float f_F08; } Obj;
extern void func_040D18(Obj *a0);
extern float func_0013E8(void);
void func_06F800(Obj *a0)
{
    func_040D18(a0);
    a0->f_F08 = func_0013E8();
}
