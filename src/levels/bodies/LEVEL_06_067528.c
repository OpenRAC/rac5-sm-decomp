/* LEVEL_06:0x067528 -- stores the routine's result in the object's field. */
typedef struct {
    char pad[0xF08];
    float f_F08;
} Obj;

extern void func_038528(void);
extern float func_0013E8(void);

void func_067528(Obj *a0)
{
    func_038528();
    a0->f_F08 = func_0013E8();
}
