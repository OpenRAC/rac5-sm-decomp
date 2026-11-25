/* LEVEL_22:0x0B6868 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_0015FF80;
extern char *D_0015FF84;
extern char *D_0015FF88;
extern unsigned char D_0015FF90;

extern char *func_109980(int id);
extern void func_10CB48(struct Obj *o);
extern void func_10CB98(struct Obj *o, int a);

void func_0B6868(struct Obj *o)
{
    func_10CB48(o);
    D_0015FF80 = func_109980(0xA84);
    D_0015FF84 = func_109980(0x327);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 0;
    func_10CB98(o, 0x18);
}
