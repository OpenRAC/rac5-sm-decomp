/* LEVEL_20:0x0A1828 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_0019D510[];
extern char *D_00111358;
extern char *D_0011135C;
extern char *D_00111360;
extern unsigned char D_00111368;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_0E2118(int id);
extern int func_0E3270(void);
extern void func_0E4B30(struct Obj *o);
extern void func_0E4B80(struct Obj *o, int a);

void func_0A1828(struct Obj *o)
{
    func_0E4B30(o);
    sprintf(D_0019D510, func_0E2118(0xA88), func_0E3270(), func_0E3270());
    D_00111358 = D_0019D510;
    D_0011135C = func_0E2118(0x327);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 0;
    func_0E4B80(o, 0x18);
}
