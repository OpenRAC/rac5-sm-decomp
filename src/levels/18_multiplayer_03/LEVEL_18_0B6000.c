/* LEVEL_18:0x0B6000 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001B00F8;
extern char *D_001B00FC;
extern char *D_001B0100;
extern unsigned char D_001B0108;

extern char *func_10DFE0(int id);
extern void func_1109F8(struct Obj *o);
extern void func_110A48(struct Obj *o, int a);

void func_0B6000(struct Obj *o)
{
    func_1109F8(o);
    D_001B00F8 = func_10DFE0(0xA84);
    D_001B00FC = func_10DFE0(0x327);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 0;
    func_110A48(o, 0x18);
}
