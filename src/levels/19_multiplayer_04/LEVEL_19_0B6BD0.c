/* LEVEL_19:0x0B6BD0 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00279E50[];
extern char *D_001AFDF8;
extern char *D_001AFDFC;
extern char *D_001AFE00;
extern unsigned char D_001AFE08;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_10F9D0(int id);
extern int func_110B28(void);
extern void func_1123E8(struct Obj *o);
extern void func_112438(struct Obj *o, int a);

void func_0B6BD0(struct Obj *o)
{
    func_1123E8(o);
    sprintf(D_00279E50, func_10F9D0(0xA88), func_110B28(), func_110B28());
    D_001AFDF8 = D_00279E50;
    D_001AFDFC = func_10F9D0(0x327);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 0;
    func_112438(o, 0x18);
}
