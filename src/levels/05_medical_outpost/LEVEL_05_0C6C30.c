/* LEVEL_05:0x0C6C30 -- placement copy of LEVEL_24_0C1F50.c: placement copy of LEVEL_01_0C8688.c: formats a message from two counters into the shared text buffer, publishes the buffer and two further strings through globals, clears the style byte and runs the shared step. */
struct Obj;

extern char D_00317C50[];
extern char *D_001EFF80;
extern char *D_001EFF84;
extern char *D_001EFF88;
extern unsigned char D_001EFF90;

extern int sprintf(char *buf, const char *fmt, ...);
extern char *func_12DE28(int id);
extern int func_12F098(void);
extern void func_130FF0(struct Obj *o);
extern void func_131040(struct Obj *o, int a);

void func_0C6C30(struct Obj *o)
{
    func_130FF0(o);
    sprintf(D_00317C50, func_12DE28(0xA88), func_12F098(), func_12F098());
    D_001EFF80 = D_00317C50;
    D_001EFF84 = func_12DE28(0x327);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 0;
    func_131040(o, 0x18);
}
