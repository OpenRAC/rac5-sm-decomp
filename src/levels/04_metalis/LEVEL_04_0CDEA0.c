/* LEVEL_04:0x0CDEA0 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00346590[];
extern char *D_0021A0C0;
extern char *D_0021A0C4;
extern char *D_0021A0C8;
extern unsigned char D_0021A0D0;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_13E930(int id);
extern int func_13FBA0(void);
extern void func_141AF8(struct Obj *o);
extern void func_141B48(struct Obj *o, int a);

void func_0CDEA0(struct Obj *o)
{
    func_141AF8(o);
    sprintf(D_00346590, func_13E930(0xA88), func_13FBA0(), func_13FBA0());
    D_0021A0C0 = D_00346590;
    D_0021A0C4 = func_13E930(0x327);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 0;
    func_141B48(o, 0x18);
}
