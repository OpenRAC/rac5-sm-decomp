/* LEVEL_02:0x0CEF98 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00343290[];
extern char *D_00215BC0;
extern char *D_00215BC4;
extern char *D_00215BC8;
extern unsigned char D_00215BD0;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_138860(int id);
extern int func_139AD0(void);
extern void func_13BA28(struct Obj *o);
extern void func_13BA78(struct Obj *o, int a);

void func_0CEF98(struct Obj *o)
{
    func_13BA28(o);
    sprintf(D_00343290, func_138860(0xA88), func_139AD0(), func_139AD0());
    D_00215BC0 = D_00343290;
    D_00215BC4 = func_138860(0x327);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 0;
    func_13BA78(o, 0x18);
}
