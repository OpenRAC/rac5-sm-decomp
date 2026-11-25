/* LEVEL_07:0x0CA418 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00214F00;
extern char *D_00214F04;
extern char *D_00214F08;
extern unsigned char D_00214F10;

extern char *func_1354B0(int id);
extern void func_138678(struct Obj *o);
extern void func_1386C8(struct Obj *o, int a);

void func_0CA418(struct Obj *o)
{
    func_138678(o);
    D_00214F00 = func_1354B0(0xA84);
    D_00214F04 = func_1354B0(0x327);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 0;
    func_1386C8(o, 0x18);
}
