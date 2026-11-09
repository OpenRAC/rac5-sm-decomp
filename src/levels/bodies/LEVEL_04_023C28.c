/* LEVEL_04:0x023C28 -- placement copy of LEVEL_01_023FA8.c: formats a localized description string for an item into a buffer. */
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
extern char *D_00226128[][2];
extern Info *func_0242F0(int a, int b);
extern Info *func_024350(int a, int b, int c);
extern char *func_13E930(int a);
extern int sprintf(char *buf, const char *fmt, ...);

void func_023C28(Obj *o, char *buf, int x, unsigned int kind, int n)
{
    Info *u;
    Info *w;
    int j;

    if (kind < 4) {
        u = func_0242F0(x, o->wF8);
        if (n == 1)
            sprintf(buf, func_13E930(u->w28), 1);
        else
            sprintf(buf, func_13E930(u->w2C), n);
        return;
    }
    w = func_024350(x, 3, o->wF8);
    j = n != 1;
    sprintf(buf, func_13E930((int)D_00226128[kind - 4][j]), n, func_13E930(w->w10));
}
