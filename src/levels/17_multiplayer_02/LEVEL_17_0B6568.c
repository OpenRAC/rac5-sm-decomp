/* LEVEL_17:0x0B6568 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001A2278;
extern char *D_001A227C;
extern char *D_001A2280;
extern unsigned char D_001A2288;

extern char *func_10E8A8(int id);
extern void func_1112C0(struct Obj *o);
extern void func_111310(struct Obj *o, int a);

void func_0B6568(struct Obj *o)
{
    func_1112C0(o);
    D_001A2278 = func_10E8A8(0xA84);
    D_001A227C = func_10E8A8(0x327);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 0;
    func_111310(o, 0x18);
}
