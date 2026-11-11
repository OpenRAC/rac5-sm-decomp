/* LEVEL_01:0x023FA8 -- formats a localized description string for an item into a buffer. */
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
extern char *D_0020C7A8[][2];
extern Info *func_024670(int a, int b);
extern Info *func_0246D0(int a, int b, int c);
extern char *func_1324B0(int a);
extern int sprintf(char *buf, const char *fmt, ...);

void func_023FA8(Obj *o, char *buf, int x, unsigned int kind, int n)
{
    Info *u;
    Info *w;
    int j;

    if (kind < 4) {
        u = func_024670(x, o->wF8);
        if (n == 1)
            sprintf(buf, func_1324B0(u->w28), 1);
        else
            sprintf(buf, func_1324B0(u->w2C), n);
        return;
    }
    w = func_0246D0(x, 3, o->wF8);
    j = n != 1;
    sprintf(buf, func_1324B0((int)D_0020C7A8[kind - 4][j]), n, func_1324B0(w->w10));
}
