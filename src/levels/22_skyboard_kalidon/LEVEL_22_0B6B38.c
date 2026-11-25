/* LEVEL_22:0x0B6B38 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00281950[];
extern char *D_0015FF80;
extern char *D_0015FF84;
extern char *D_0015FF88;
extern unsigned char D_0015FF90;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_109980(int id);
extern int func_10ABF0(void);
extern void func_10CB48(struct Obj *o);
extern void func_10CB98(struct Obj *o, int a);

void func_0B6B38(struct Obj *o)
{
    func_10CB48(o);
    sprintf(D_00281950, func_109980(0xA88), func_10ABF0(), func_10ABF0());
    D_0015FF80 = D_00281950;
    D_0015FF84 = func_109980(0x327);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 0;
    func_10CB98(o, 0x18);
}
