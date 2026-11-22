/* LEVEL_20:0x01E718 -- placement copy of LEVEL_16_021A00.c: formats a text entry for an item kind into a buffer. */
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

extern Entry *func_01EE10(int key, int table);
extern Entry *func_01EE70(int key, int mode, int table);
extern char *func_0E2118(int id);
extern int sprintf(char *buf, const char *fmt, ...);

void func_01E718(Owner *o, char *buf, int key, unsigned int kind, int extra)
{
    Entry *e;
    char *s;

    if (kind < 3) {
        e = func_01EE10(key, o->table);
        sprintf(buf, func_0E2118(e->f30));
    } else {
        e = func_01EE70(key, 2, o->table);
        switch (kind) {
        case 4:
            s = func_0E2118(0x3C7);
            sprintf(buf, s, func_0E2118(e->f10));
            break;
        case 5:
            s = func_0E2118(0x3C8);
            sprintf(buf, s, func_0E2118(e->f10));
            break;
        case 6:
            s = func_0E2118(0x3C9);
            sprintf(buf, s, func_0E2118(e->f10));
            break;
        case 7:
            s = func_0E2118(0x3CA);
            sprintf(buf, s, func_0E2118(e->f10));
            break;
        }
    }
}
