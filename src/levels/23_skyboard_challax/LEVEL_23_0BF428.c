/* LEVEL_23:0x0BF428 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_002FD1D0[];
extern char *D_001D4000;
extern char *D_001D4004;
extern char *D_001D4008;
extern unsigned char D_001D4010;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_123C28(int id);
extern int func_124E98(void);
extern void func_126DF0(struct Obj *o);
extern void func_126E40(struct Obj *o, int a);

void func_0BF428(struct Obj *o)
{
    func_126DF0(o);
    sprintf(D_002FD1D0, func_123C28(0xA88), func_124E98(), func_124E98());
    D_001D4000 = D_002FD1D0;
    D_001D4004 = func_123C28(0x327);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 0;
    func_126E40(o, 0x18);
}
