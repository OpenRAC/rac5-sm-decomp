/* LEVEL_10:0x0C9AC8 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00335190[];
extern char *D_00209C00;
extern char *D_00209C04;
extern char *D_00209C08;
extern unsigned char D_00209C10;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_130310(int id);
extern int func_1315A0(void);
extern void func_1334F8(struct Obj *o);
extern void func_133548(struct Obj *o, int a);

void func_0C9AC8(struct Obj *o)
{
    func_1334F8(o);
    sprintf(D_00335190, func_130310(0xA88), func_1315A0(), func_1315A0());
    D_00209C00 = D_00335190;
    D_00209C04 = func_130310(0x327);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 0;
    func_133548(o, 0x18);
}
