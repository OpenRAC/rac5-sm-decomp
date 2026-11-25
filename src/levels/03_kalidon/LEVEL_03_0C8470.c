/* LEVEL_03:0x0C8470 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00346C10[];
extern char *D_00219280;
extern char *D_00219284;
extern char *D_00219288;
extern unsigned char D_00219290;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_130878(int id);
extern int func_131AE8(void);
extern void func_133A40(struct Obj *o);
extern void func_133A90(struct Obj *o, int a);

void func_0C8470(struct Obj *o)
{
    func_133A40(o);
    sprintf(D_00346C10, func_130878(0xA88), func_131AE8(), func_131AE8());
    D_00219280 = D_00346C10;
    D_00219284 = func_130878(0x327);
    D_00219288 = func_130878(0x218);
    D_00219290 = 0;
    func_133A90(o, 0x18);
}
