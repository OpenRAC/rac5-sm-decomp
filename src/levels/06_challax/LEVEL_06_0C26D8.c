/* LEVEL_06:0x0C26D8 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001EFB30;
extern char *D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern char D_00318B10[];

struct Obj;
extern void func_12BD48(struct Obj *p);
extern int func_1295C8(void);
extern char *func_128B80(int id);
extern int func_129DF0(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_12BD98(struct Obj *p, int v);

void func_0C26D8(struct Obj *o)
{
    int ret;

    func_12BD48(o);
    ret = func_1295C8();
    D_001EFB30 = ret;
    if (D_001EFB30 != 0)
        sprintf(D_00318B10, func_128B80(0xA81), func_129DF0());
    else
        sprintf(D_00318B10, func_128B80(0xA7E), func_129DF0());
    D_001EFB00 = D_00318B10;
    D_001EFB04 = (int)func_128B80(0x30B);
    D_001EFB08 = (int)func_128B80(0x218);
    func_12BD98(o, 0x18);
}
