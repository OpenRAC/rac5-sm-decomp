/* LEVEL_05:0x0C6960 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001EFF80;
extern char *D_001EFF84;
extern char *D_001EFF88;
extern unsigned char D_001EFF90;

extern char *func_12DE28(int id);
extern void func_130FF0(struct Obj *o);
extern void func_131040(struct Obj *o, int a);

void func_0C6960(struct Obj *o)
{
    func_130FF0(o);
    D_001EFF80 = func_12DE28(0xA84);
    D_001EFF84 = func_12DE28(0x327);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 0;
    func_131040(o, 0x18);
}
