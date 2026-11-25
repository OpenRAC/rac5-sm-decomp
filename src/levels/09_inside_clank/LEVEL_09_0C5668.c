/* LEVEL_09:0x0C5668 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001EAA00;
extern char *D_001EAA04;
extern char *D_001EAA08;
extern unsigned char D_001EAA10;

extern char *func_12B448(int id);
extern void func_12E610(struct Obj *o);
extern void func_12E660(struct Obj *o, int a);

void func_0C5668(struct Obj *o)
{
    func_12E610(o);
    D_001EAA00 = func_12B448(0xA84);
    D_001EAA04 = func_12B448(0x327);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 0;
    func_12E660(o, 0x18);
}
