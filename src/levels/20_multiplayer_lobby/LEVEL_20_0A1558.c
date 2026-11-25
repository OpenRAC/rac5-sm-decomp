/* LEVEL_20:0x0A1558 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00111358;
extern char *D_0011135C;
extern char *D_00111360;
extern unsigned char D_00111368;

extern char *func_0E2118(int id);
extern void func_0E4B30(struct Obj *o);
extern void func_0E4B80(struct Obj *o, int a);

void func_0A1558(struct Obj *o)
{
    func_0E4B30(o);
    D_00111358 = func_0E2118(0xA84);
    D_0011135C = func_0E2118(0x327);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 0;
    func_0E4B80(o, 0x18);
}
