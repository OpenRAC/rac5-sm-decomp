/* LEVEL_07:0x0CA6E8 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00341690[];
extern char *D_00214F00;
extern char *D_00214F04;
extern char *D_00214F08;
extern unsigned char D_00214F10;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_1354B0(int id);
extern int func_136720(void);
extern void func_138678(struct Obj *o);
extern void func_1386C8(struct Obj *o, int a);

void func_0CA6E8(struct Obj *o)
{
    func_138678(o);
    sprintf(D_00341690, func_1354B0(0xA88), func_136720(), func_136720());
    D_00214F00 = D_00341690;
    D_00214F04 = func_1354B0(0x327);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 0;
    func_1386C8(o, 0x18);
}
