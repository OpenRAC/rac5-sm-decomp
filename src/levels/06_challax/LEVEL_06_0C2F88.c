/* LEVEL_06:0x0C2F88 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00318B10[];
extern char *D_001EFB00;
extern char *D_001EFB04;
extern char *D_001EFB08;
extern unsigned char D_001EFB10;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_128B80(int id);
extern int func_129DF0(void);
extern void func_12BD48(struct Obj *o);
extern void func_12BD98(struct Obj *o, int a);

void func_0C2F88(struct Obj *o)
{
    func_12BD48(o);
    sprintf(D_00318B10, func_128B80(0xA88), func_129DF0(), func_129DF0());
    D_001EFB00 = D_00318B10;
    D_001EFB04 = func_128B80(0x327);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 0;
    func_12BD98(o, 0x18);
}
