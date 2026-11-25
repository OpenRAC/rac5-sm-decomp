/* FRONTEND:0x0183F0 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00030480;
extern char *D_00030484;
extern char *D_00030488;
extern unsigned char D_00030490;

extern char *func_01F778(int id);
extern void func_022938(struct Obj *o);
extern void func_022988(struct Obj *o, int a);

void func_0183F0(struct Obj *o)
{
    func_022938(o);
    D_00030480 = func_01F778(0xA84);
    D_00030484 = func_01F778(0x327);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 0;
    func_022988(o, 0x18);
}
