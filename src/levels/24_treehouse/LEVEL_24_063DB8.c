/* LEVEL_24:0x063DB8 -- arms the object and stores the value it now
   reports at +0xF08. */
typedef struct {
    char pad_00[0xF08];
    float f_F08;
} Obj;

extern void func_034EA8(Obj *o);
extern float func_0011F0(void);

void func_063DB8(Obj *a0)
{
    func_034EA8(a0);
    a0->f_F08 = func_0011F0();
}
