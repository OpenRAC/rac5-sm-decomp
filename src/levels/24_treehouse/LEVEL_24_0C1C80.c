/* LEVEL_24:0x0C1C80 -- placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001D1880;
extern char *D_001D1884;
extern char *D_001D1888;
extern unsigned char D_001D1890;

extern char *func_127FB0(int id);
extern void func_12B178(struct Obj *o);
extern void func_12B1C8(struct Obj *o, int a);

void func_0C1C80(struct Obj *o)
{
    func_12B178(o);
    D_001D1880 = func_127FB0(0xA84);
    D_001D1884 = func_127FB0(0x327);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 0;
    func_12B1C8(o, 0x18);
}
