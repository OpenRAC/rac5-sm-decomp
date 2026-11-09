/* LEVEL_01.REL:0x0240B0: reviewed 288-byte candidate, held for ABI review.
 * Formats a text entry for an item kind into a buffer.
 * pinned C with gnu-ee-trial links 288/288 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer, int, int),
 * but the accepted caller LEVEL_01_0241D0.c declares it returning void with
 * (pointer, pointer, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern Entry *func_024670(int key, int table);
extern Entry *func_0246D0(int key, int mode, int table);
extern char *func_1324B0(int id);
extern int sprintf(char *buf, const char *fmt, ...);

void func_0240B0(Owner *o, char *buf, int key, unsigned int kind)
{
    Entry *e;
    char *s;

    if (kind < 4) {
        e = func_024670(key, o->table);
        sprintf(buf, func_1324B0(e->f30));
    } else {
        e = func_0246D0(key, 3, o->table);
        switch (kind) {
        case 4:
            s = func_1324B0(0x3C7);
            sprintf(buf, s, func_1324B0(e->f10));
            break;
        case 5:
            s = func_1324B0(0x3C8);
            sprintf(buf, s, func_1324B0(e->f10));
            break;
        case 6:
            s = func_1324B0(0x3C9);
            sprintf(buf, s, func_1324B0(e->f10));
            break;
        case 7:
            s = func_1324B0(0x3CA);
            sprintf(buf, s, func_1324B0(e->f10));
            break;
        }
    }
}
