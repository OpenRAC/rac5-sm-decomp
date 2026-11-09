/* LEVEL_24:0x021D20 -- placement copy of LEVEL_01_0240B0.c: formats a text entry for an item kind into a buffer. */
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

extern Entry *func_022448(int key, int table);
extern Entry *func_0224A8(int key, int mode, int table);
extern char *func_127FB0(int id);
extern int sprintf(char *buf, const char *fmt, ...);

void func_021D20(Owner *o, char *buf, int key, unsigned int kind, int extra)
{
    Entry *e;
    char *s;

    if (kind < 4) {
        e = func_022448(key, o->table);
        sprintf(buf, func_127FB0(e->f30));
    } else {
        e = func_0224A8(key, 3, o->table);
        switch (kind) {
        case 4:
            s = func_127FB0(0x3C7);
            sprintf(buf, s, func_127FB0(e->f10));
            break;
        case 5:
            s = func_127FB0(0x3C8);
            sprintf(buf, s, func_127FB0(e->f10));
            break;
        case 6:
            s = func_127FB0(0x3C9);
            sprintf(buf, s, func_127FB0(e->f10));
            break;
        case 7:
            s = func_127FB0(0x3CA);
            sprintf(buf, s, func_127FB0(e->f10));
            break;
        }
    }
}
