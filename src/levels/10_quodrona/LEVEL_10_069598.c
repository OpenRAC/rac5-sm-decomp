/* LEVEL_10.REL:0x069598 -- runs the update routine and stores the value it
   returns in the frame slot of the object. */
typedef struct {
    char pad0[0xF08];
    float f_F08;
} Obj;

void func_03A4E8(Obj *a0);
float func_001178(void);

void func_069598(Obj *a0)
{
    func_03A4E8(a0);
    a0->f_F08 = func_001178();
}
