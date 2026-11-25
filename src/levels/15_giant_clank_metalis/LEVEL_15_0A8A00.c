/* LEVEL_15:0x0A8A00 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_00155880;
extern char *D_00155884;
extern char *D_00155888;
extern unsigned char D_00155890;

extern char *func_0F1378(int id);
extern void func_0F4540(struct Obj *o);
extern void func_0F4590(struct Obj *o, int a);

void func_0A8A00(struct Obj *o)
{
    func_0F4540(o);
    D_00155880 = func_0F1378(0xA84);
    D_00155884 = func_0F1378(0x327);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 0;
    func_0F4590(o, 0x18);
}
