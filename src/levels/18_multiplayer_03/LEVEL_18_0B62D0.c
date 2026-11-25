/* LEVEL_18:0x0B62D0 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_0027A050[];
extern char *D_001B00F8;
extern char *D_001B00FC;
extern char *D_001B0100;
extern unsigned char D_001B0108;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_10DFE0(int id);
extern int func_10F138(void);
extern void func_1109F8(struct Obj *o);
extern void func_110A48(struct Obj *o, int a);

void func_0B62D0(struct Obj *o)
{
    func_1109F8(o);
    sprintf(D_0027A050, func_10DFE0(0xA88), func_10F138(), func_10F138());
    D_001B00F8 = D_0027A050;
    D_001B00FC = func_10DFE0(0x327);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 0;
    func_110A48(o, 0x18);
}
