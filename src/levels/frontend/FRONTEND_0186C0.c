/* FRONTEND:0x0186C0 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_001973B8[];
extern char *D_00030480;
extern char *D_00030484;
extern char *D_00030488;
extern unsigned char D_00030490;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_01F778(int id);
extern int func_0210B0(void);
extern void func_022938(struct Obj *o);
extern void func_022988(struct Obj *o, int a);

void func_0186C0(struct Obj *o)
{
    func_022938(o);
    sprintf(D_001973B8, func_01F778(0xA88), func_0210B0(), func_0210B0());
    D_00030480 = D_001973B8;
    D_00030484 = func_01F778(0x327);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 0;
    func_022988(o, 0x18);
}
