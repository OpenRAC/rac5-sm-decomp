/* LEVEL_08.REL:0x001410 -- stores the requested level, then hands the
   adjusted one to the chorus. */
typedef struct { char pad[0xF8]; float f_F8; } Obj;
extern Obj *D_00237DC8;
extern float func_084040(float f);
extern void func_001458(float f);
void func_001410(float f)
{
    D_00237DC8->f_F8 = f;
    func_001458(func_084040(f));
}
