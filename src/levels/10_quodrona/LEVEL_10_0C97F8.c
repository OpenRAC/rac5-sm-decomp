/* LEVEL_10:0x0C97F8 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00209C00;
extern char *D_00209C04;
extern char *D_00209C08;
extern unsigned char D_00209C10;

extern char *func_130310(int id);
extern void func_1334F8(struct Obj *o);
extern void func_133548(struct Obj *o, int a);

void func_0C97F8(struct Obj *o)
{
    func_1334F8(o);
    D_00209C00 = func_130310(0xA84);
    D_00209C04 = func_130310(0x327);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 0;
    func_133548(o, 0x18);
}
