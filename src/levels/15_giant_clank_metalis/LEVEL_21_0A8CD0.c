/* LEVEL_21:0x0A8CD0 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_002435D0[];
extern char *D_00155880;
extern char *D_00155884;
extern char *D_00155888;
extern unsigned char D_00155890;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_0F1378(int id);
extern int func_0F25E8(void);
extern void func_0F4540(struct Obj *o);
extern void func_0F4590(struct Obj *o, int a);

void func_0A8CD0(struct Obj *o)
{
    func_0F4540(o);
    sprintf(D_002435D0, func_0F1378(0xA88), func_0F25E8(), func_0F25E8());
    D_00155880 = D_002435D0;
    D_00155884 = func_0F1378(0x327);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 0;
    func_0F4590(o, 0x18);
}
