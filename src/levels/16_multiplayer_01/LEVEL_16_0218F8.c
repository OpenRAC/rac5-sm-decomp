/* LEVEL_16:0x0218F8 -- placement copy of LEVEL_01_023FA8.c: formats a localized description string for an item into a buffer. */
typedef struct {
    char pad0[0x10];
    int w10;
    char pad14[0x14];
    int w28;
    int w2C;
} Info;
typedef struct {
    char pad0[0xF8];
    int wF8;
} Obj;
extern char *D_001C1788[][2];
extern int func_022110(unsigned int a, int b);
extern Info *func_022170(int a, int b, int c);
extern char *func_10F330(int a);
extern int sprintf(char *buf, const char *fmt, ...);

void func_0218F8(Obj *o, char *buf, int x, unsigned int kind, int n, int buf_size)
{
    Info *u;
    Info *w;
    int j;

    if (kind < 3) {
        u = (Info *)func_022110(x, o->wF8);
        if (n == 1)
            sprintf(buf, func_10F330(u->w28), 1);
        else
            sprintf(buf, func_10F330(u->w2C), n);
        return;
    }
    w = func_022170(x, 2, o->wF8);
    j = n != 1;
    sprintf(buf, func_10F330((int)D_001C1788[kind - 4][j]), n, func_10F330(w->w10));
}
