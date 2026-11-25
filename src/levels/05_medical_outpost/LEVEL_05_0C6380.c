/* LEVEL_05:0x0C6380 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001EFFB0;
extern char *D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern char D_00317C50[];

struct Obj;
extern void func_130FF0(struct Obj *p);
extern int func_12E870(void);
extern char *func_12DE28(int id);
extern int func_12F098(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_131040(struct Obj *p, int v);

void func_0C6380(struct Obj *o)
{
    int ret;

    func_130FF0(o);
    ret = func_12E870();
    D_001EFFB0 = ret;
    if (D_001EFFB0 != 0)
        sprintf(D_00317C50, func_12DE28(0xA81), func_12F098());
    else
        sprintf(D_00317C50, func_12DE28(0xA7E), func_12F098());
    D_001EFF80 = D_00317C50;
    D_001EFF84 = (int)func_12DE28(0x30B);
    D_001EFF88 = (int)func_12DE28(0x218);
    func_131040(o, 0x18);
}
