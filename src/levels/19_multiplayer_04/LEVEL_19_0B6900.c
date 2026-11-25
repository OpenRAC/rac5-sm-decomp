/* LEVEL_19:0x0B6900 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001AFDF8;
extern char *D_001AFDFC;
extern char *D_001AFE00;
extern unsigned char D_001AFE08;

extern char *func_10F9D0(int id);
extern void func_1123E8(struct Obj *o);
extern void func_112438(struct Obj *o, int a);

void func_0B6900(struct Obj *o)
{
    func_1123E8(o);
    D_001AFDF8 = func_10F9D0(0xA84);
    D_001AFDFC = func_10F9D0(0x327);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 0;
    func_112438(o, 0x18);
}
