/* LEVEL_09:0x0C5088 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001EAA30;
extern char *D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern char D_00313510[];

struct Obj;
extern void func_12E610(struct Obj *p);
extern int func_12BE90(void);
extern char *func_12B448(int id);
extern int func_12C6B8(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_12E660(struct Obj *p, int v);

void func_0C5088(struct Obj *o)
{
    int ret;

    func_12E610(o);
    ret = func_12BE90();
    D_001EAA30 = ret;
    if (D_001EAA30 != 0)
        sprintf(D_00313510, func_12B448(0xA81), func_12C6B8());
    else
        sprintf(D_00313510, func_12B448(0xA7E), func_12C6B8());
    D_001EAA00 = D_00313510;
    D_001EAA04 = (int)func_12B448(0x30B);
    D_001EAA08 = (int)func_12B448(0x218);
    func_12E660(o, 0x18);
}
