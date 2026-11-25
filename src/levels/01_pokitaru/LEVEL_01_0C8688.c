/* LEVEL_01:0x0C8688 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_0032BD90[];
extern char *D_00200C00;
extern char *D_00200C04;
extern char *D_00200C08;
extern unsigned char D_00200C10;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_1324B0(int id);
extern int func_133720(void);
extern void func_135678(struct Obj *o);
extern void func_1356C8(struct Obj *o, int a);

void func_0C8688(struct Obj *o)
{
    func_135678(o);
    sprintf(D_0032BD90, func_1324B0(0xA88), func_133720(), func_133720());
    D_00200C00 = D_0032BD90;
    D_00200C04 = func_1324B0(0x327);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 0;
    func_1356C8(o, 0x18);
}
