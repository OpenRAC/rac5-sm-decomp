/* LEVEL_01:0x021A00 -- formats a text entry for an item kind into a buffer. */
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

extern Entry *func_022110(int key, int table);
extern Entry *func_022170(int key, int mode, int table);
extern char *func_10F330(int id);
extern int sprintf(char *buf, const char *fmt, ...);

void func_021A00(Owner *o, char *buf, int key, unsigned int kind, int extra)
{
    Entry *e;
    char *s;

    if (kind < 3) {
        e = func_022110(key, o->table);
        sprintf(buf, func_10F330(e->f30));
    } else {
        e = func_022170(key, 2, o->table);
        switch (kind) {
        case 4:
            s = func_10F330(0x3C7);
            sprintf(buf, s, func_10F330(e->f10));
            break;
        case 5:
            s = func_10F330(0x3C8);
            sprintf(buf, s, func_10F330(e->f10));
            break;
        case 6:
            s = func_10F330(0x3C9);
            sprintf(buf, s, func_10F330(e->f10));
            break;
        case 7:
            s = func_10F330(0x3CA);
            sprintf(buf, s, func_10F330(e->f10));
            break;
        }
    }
}
