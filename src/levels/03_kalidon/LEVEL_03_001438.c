/* LEVEL_03:001438 -- stores the incoming sample into the global record and
   forwards it through the level's routine. */
typedef struct { char pad[0xF8]; float f_F8; } Rec;
extern Rec *D_002078C8;
extern float func_07BEB0(float f12);
extern void func_001480(float f12);
void func_001438(float f12)
{
    D_002078C8->f_F8 = f12;
    func_001480(func_07BEB0(f12));
}
