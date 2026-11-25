/* LEVEL_01:0x0C83B8 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00200C00;
extern char *D_00200C04;
extern char *D_00200C08;
extern unsigned char D_00200C10;

extern char *func_1324B0(int id);
extern void func_135678(struct Obj *o);
extern void func_1356C8(struct Obj *o, int a);

void func_0C83B8(struct Obj *o)
{
    func_135678(o);
    D_00200C00 = func_1324B0(0xA84);
    D_00200C04 = func_1324B0(0x327);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 0;
    func_1356C8(o, 0x18);
}
