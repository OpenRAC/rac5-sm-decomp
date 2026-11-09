/* LEVEL_02:0x024A10 -- placement copy of LEVEL_01_0240B0.c: formats a text entry for an item kind into a buffer. */
typedef struct {
    char pad0[0x10];
    int f10;
    char pad14[0x1C];
    int f30;
} Entry;

typedef struct {
    char pad0[0xF8];
    int table;
} Owner;

extern Entry *func_024FD0(int key, int table);
extern Entry *func_025030(int key, int mode, int table);
extern char *func_138860(int id);
extern int sprintf(char *buf, const char *fmt, ...);

void func_024A10(Owner *o, char *buf, int key, unsigned int kind, int extra)
{
    Entry *e;
    char *s;

    if (kind < 4) {
        e = func_024FD0(key, o->table);
        sprintf(buf, func_138860(e->f30));
    } else {
        e = func_025030(key, 3, o->table);
        switch (kind) {
        case 4:
            s = func_138860(0x3C7);
            sprintf(buf, s, func_138860(e->f10));
            break;
        case 5:
            s = func_138860(0x3C8);
            sprintf(buf, s, func_138860(e->f10));
            break;
        case 6:
            s = func_138860(0x3C9);
            sprintf(buf, s, func_138860(e->f10));
            break;
        case 7:
            s = func_138860(0x3CA);
            sprintf(buf, s, func_138860(e->f10));
            break;
        }
    }
}
