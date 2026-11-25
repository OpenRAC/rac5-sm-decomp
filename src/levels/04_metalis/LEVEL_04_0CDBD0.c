/* LEVEL_04:0x0CDBD0 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_0021A0C0;
extern char *D_0021A0C4;
extern char *D_0021A0C8;
extern unsigned char D_0021A0D0;

extern char *func_13E930(int id);
extern void func_141AF8(struct Obj *o);
extern void func_141B48(struct Obj *o, int a);

void func_0CDBD0(struct Obj *o)
{
    func_141AF8(o);
    D_0021A0C0 = func_13E930(0xA84);
    D_0021A0C4 = func_13E930(0x327);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 0;
    func_141B48(o, 0x18);
}
