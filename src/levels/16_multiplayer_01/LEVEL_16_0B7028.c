/* LEVEL_16:0x0B7028 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001AEC78;
extern char *D_001AEC7C;
extern char *D_001AEC80;
extern unsigned char D_001AEC88;

extern char *func_10F330(int id);
extern void func_111D48(struct Obj *o);
extern void func_111D98(struct Obj *o, int a);

void func_0B7028(struct Obj *o)
{
    func_111D48(o);
    D_001AEC78 = func_10F330(0xA84);
    D_001AEC7C = func_10F330(0x327);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 0;
    func_111D98(o, 0x18);
}
