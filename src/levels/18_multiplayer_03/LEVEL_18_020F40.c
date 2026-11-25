/* LEVEL_18:0x020F40 -- placement copy of LEVEL_16_0218F8.c: placement copy of LEVEL_01_023FA8.c: formats a localized description string for an item into a buffer. */
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
extern char *D_001C2D08[][2];
extern int func_021758(unsigned int a, int b);
extern Info *func_0217B8(int a, int b, int c);
extern char *func_10DFE0(int a);
extern int sprintf(char *buf, const char *fmt, ...);

void func_020F40(Obj *o, char *buf, int x, unsigned int kind, int n, int buf_size)
{
    Info *u;
    Info *w;
    int j;

    if (kind < 3) {
        u = (Info *)func_021758(x, o->wF8);
        if (n == 1)
            sprintf(buf, func_10DFE0(u->w28), 1);
        else
            sprintf(buf, func_10DFE0(u->w2C), n);
        return;
    }
    w = func_0217B8(x, 2, o->wF8);
    j = n != 1;
    sprintf(buf, func_10DFE0((int)D_001C2D08[kind - 4][j]), n, func_10DFE0(w->w10));
}
