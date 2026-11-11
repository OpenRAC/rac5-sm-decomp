/* LEVEL_10:0011A0 -- stores the incoming sample into the global record and
   forwards it through the level's routine. */
typedef struct { char pad[0xF8]; float f_F8; } Rec;
extern Rec *D_001F8248;
extern float func_07C6E8(float f12);
extern void func_0011E8(float f12);
void func_0011A0(float f12)
{
    D_001F8248->f_F8 = f12;
    func_0011E8(func_07C6E8(f12));
}
