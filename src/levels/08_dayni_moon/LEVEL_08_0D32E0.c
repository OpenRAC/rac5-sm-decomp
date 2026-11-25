/* LEVEL_08:0x0D32E0 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00249AC0;
extern char *D_00249AC4;
extern char *D_00249AC8;
extern unsigned char D_00249AD0;

extern char *func_1439E8(int id);
extern void func_146BB0(struct Obj *o);
extern void func_146C00(struct Obj *o, int a);

void func_0D32E0(struct Obj *o)
{
    func_146BB0(o);
    D_00249AC0 = func_1439E8(0xA84);
    D_00249AC4 = func_1439E8(0x327);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 0;
    func_146C00(o, 0x18);
}
