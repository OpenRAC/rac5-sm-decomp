/* LEVEL_02:0x0CECC8 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00215BC0;
extern char *D_00215BC4;
extern char *D_00215BC8;
extern unsigned char D_00215BD0;

extern char *func_138860(int id);
extern void func_13BA28(struct Obj *o);
extern void func_13BA78(struct Obj *o, int a);

void func_0CECC8(struct Obj *o)
{
    func_13BA28(o);
    D_00215BC0 = func_138860(0xA84);
    D_00215BC4 = func_138860(0x327);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 0;
    func_13BA78(o, 0x18);
}
