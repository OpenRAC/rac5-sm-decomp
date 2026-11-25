/* LEVEL_23:0x0BF158 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001D4000;
extern char *D_001D4004;
extern char *D_001D4008;
extern unsigned char D_001D4010;

extern char *func_123C28(int id);
extern void func_126DF0(struct Obj *o);
extern void func_126E40(struct Obj *o, int a);

void func_0BF158(struct Obj *o)
{
    func_126DF0(o);
    D_001D4000 = func_123C28(0xA84);
    D_001D4004 = func_123C28(0x327);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 0;
    func_126E40(o, 0x18);
}
