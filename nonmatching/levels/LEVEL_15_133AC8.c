/* USA LEVEL_15.REL:0x133AC8, 220-byte candidate (21 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Item Item;

typedef struct {
    void (*notify)(Item *it, void *src, char *tag, int arg);
    int pad04;
    int (*accept)(Item *it, void *src, float f);
} VTable;

struct Item {
    VTable *vt;
};

typedef struct {
    char pad00[0x14];
    Item *item;
} Entry;

typedef struct {
    Entry *e;
} Slot;

extern Slot *D_002F3E9C;
extern char D_0016C608[];
extern int func_1331E0(void *src, int a, int b);

void func_133AC8(void *src, int arg, int a, int b, float f)
{
    Slot *s;
    Slot *end;
    Item *it;
    VTable *vt;
    int n;

    n = func_1331E0(src, a, b);
    s = D_002F3E9C;
    end = s + n;
    for (; s != end; s++) {
        it = s->e->item;
        vt = it->vt;
        if (vt->accept != 0 && vt->accept(it, src, f) == 0) {
            continue;
        }
        if (vt->notify != 0) {
            vt->notify(it, src, D_0016C608, arg);
        }
    }
}
