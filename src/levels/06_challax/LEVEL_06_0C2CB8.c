/* LEVEL_06:0x0C2CB8 -- placement copy of LEVEL_24_0C1C80.c: placement copy of LEVEL_01_0C83B8.c: runs the shared step, publishes three message strings through globals, clears the style byte and runs the follow-up step. */
struct Obj;

extern char *D_001EFB00;
extern char *D_001EFB04;
extern char *D_001EFB08;
extern unsigned char D_001EFB10;

extern char *func_128B80(int id);
extern void func_12BD48(struct Obj *o);
extern void func_12BD98(struct Obj *o, int a);

void func_0C2CB8(struct Obj *o)
{
    func_12BD48(o);
    D_001EFB00 = func_128B80(0xA84);
    D_001EFB04 = func_128B80(0x327);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 0;
    func_12BD98(o, 0x18);
}
