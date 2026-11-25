/* LEVEL_03:0x0C81A0 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00219280;
extern char *D_00219284;
extern char *D_00219288;
extern unsigned char D_00219290;

extern char *func_130878(int id);
extern void func_133A40(struct Obj *o);
extern void func_133A90(struct Obj *o, int a);

void func_0C81A0(struct Obj *o)
{
    func_133A40(o);
    D_00219280 = func_130878(0xA84);
    D_00219284 = func_130878(0x327);
    D_00219288 = func_130878(0x218);
    D_00219290 = 0;
    func_133A90(o, 0x18);
}
