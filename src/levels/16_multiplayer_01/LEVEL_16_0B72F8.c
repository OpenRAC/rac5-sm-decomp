/* LEVEL_16:0x0B72F8 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00279CD0[];
extern char *D_001AEC78;
extern char *D_001AEC7C;
extern char *D_001AEC80;
extern unsigned char D_001AEC88;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_10F330(int id);
extern int func_110488(void);
extern void func_111D48(struct Obj *o);
extern void func_111D98(struct Obj *o, int a);

void func_0B72F8(struct Obj *o)
{
    func_111D48(o);
    sprintf(D_00279CD0, func_10F330(0xA88), func_110488(), func_110488());
    D_001AEC78 = D_00279CD0;
    D_001AEC7C = func_10F330(0x327);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 0;
    func_111D98(o, 0x18);
}
