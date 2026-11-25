/* LEVEL_17:0x0B6838 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_0026AFD0[];
extern char *D_001A2278;
extern char *D_001A227C;
extern char *D_001A2280;
extern unsigned char D_001A2288;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_10E8A8(int id);
extern int func_10FA00(void);
extern void func_1112C0(struct Obj *o);
extern void func_111310(struct Obj *o, int a);

void func_0B6838(struct Obj *o)
{
    func_1112C0(o);
    sprintf(D_0026AFD0, func_10E8A8(0xA88), func_10FA00(), func_10FA00());
    D_001A2278 = D_0026AFD0;
    D_001A227C = func_10E8A8(0x327);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 0;
    func_111310(o, 0x18);
}
