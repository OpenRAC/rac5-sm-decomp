/* LEVEL_09:0x0C5938 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00313510[];
extern char *D_001EAA00;
extern char *D_001EAA04;
extern char *D_001EAA08;
extern unsigned char D_001EAA10;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_12B448(int id);
extern int func_12C6B8(void);
extern void func_12E610(struct Obj *o);
extern void func_12E660(struct Obj *o, int a);

void func_0C5938(struct Obj *o)
{
    func_12E610(o);
    sprintf(D_00313510, func_12B448(0xA88), func_12C6B8(), func_12C6B8());
    D_001EAA00 = D_00313510;
    D_001EAA04 = func_12B448(0x327);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 0;
    func_12E660(o, 0x18);
}
