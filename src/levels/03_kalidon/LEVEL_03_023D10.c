/* LEVEL_03:0x023D10 -- placement copy of LEVEL_01_023FA8.c: formats a localized description string for an item into a buffer. */
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
extern char *D_002256A8[][2];
extern Info *func_024540(int a, int b);
extern Info *func_0245A0(int a, int b, int c);
extern char *func_130878(int a);
extern int sprintf(char *buf, const char *fmt, ...);

void func_023D10(Obj *o, char *buf, int x, unsigned int kind, int n)
{
    Info *u;
    Info *w;
    int j;

    if (kind < 4) {
        u = func_024540(x, o->wF8);
        if (n == 1)
            sprintf(buf, func_130878(u->w28), 1);
        else
            sprintf(buf, func_130878(u->w2C), n);
        return;
    }
    w = func_0245A0(x, 3, o->wF8);
    j = n != 1;
    sprintf(buf, func_130878((int)D_002256A8[kind - 4][j]), n, func_130878(w->w10));
}
