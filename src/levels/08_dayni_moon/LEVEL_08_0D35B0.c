/* LEVEL_08:0x0D35B0 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_0037B010[];
extern char *D_00249AC0;
extern char *D_00249AC4;
extern char *D_00249AC8;
extern unsigned char D_00249AD0;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_1439E8(int id);
extern int func_144C58(void);
extern void func_146BB0(struct Obj *o);
extern void func_146C00(struct Obj *o, int a);

void func_0D35B0(struct Obj *o)
{
    func_146BB0(o);
    sprintf(D_0037B010, func_1439E8(0xA88), func_144C58(), func_144C58());
    D_00249AC0 = D_0037B010;
    D_00249AC4 = func_1439E8(0x327);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 0;
    func_146C00(o, 0x18);
}
