/* LEVEL_09:0x023138 -- placement copy of LEVEL_01_023FA8.c: formats a localized description string for an item into a buffer. */
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
extern char *D_001F63A8[][2];
extern Info *func_023968(int a, int b);
extern Info *func_0239C8(int a, int b, int c);
extern char *func_12B448(int a);
extern int sprintf(char *buf, const char *fmt, ...);

void func_023138(Obj *o, char *buf, int x, unsigned int kind, int n)
{
    Info *u;
    Info *w;
    int j;

    if (kind < 4) {
        u = func_023968(x, o->wF8);
        if (n == 1)
            sprintf(buf, func_12B448(u->w28), 1);
        else
            sprintf(buf, func_12B448(u->w2C), n);
        return;
    }
    w = func_0239C8(x, 3, o->wF8);
    j = n != 1;
    sprintf(buf, func_12B448((int)D_001F63A8[kind - 4][j]), n, func_12B448(w->w10));
}
