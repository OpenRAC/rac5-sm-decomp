/* USA LEVEL_07.REL:0x16B928, 344-byte candidate (21 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x10C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

struct Item;
struct Obj;

typedef struct Cls {
    char pad00[0x20];
    void (*fn_20)(struct Item *it, int a, int b, Vec3 *p, float *dir, struct Obj *o, float f);
    unsigned int tag_24;
} Cls;

typedef struct Item {
    char pad00[0x40];
    Cls *cls_40;
} Item;

typedef struct Rec {
    char pad00[0x24];
    int w_24;
} Rec;

typedef struct Obj {
    char pad00[0x20];
    float dir_20[3];
    float pad2C;
    Vec3 pos_30;
    char pad3C[0x1C];
    Rec *rec_58;
} Obj;

extern char D_00234E30[];
extern char D_00234E48[];
extern char D_0024F650[];
extern char D_00223F30[];

extern void func_1DCE78(Obj *o, Rec *r, char *tbl, float f);
extern int func_01CAA8(Item **buf, int n, Vec3 *pos, int a3, int t0, int t1, int t2, float f);
extern void func_1B7720(Item *it);
extern void func_0734A0(Obj *o, char *a, char *b);
extern void func_07E7F0(Obj *o, int a);

void func_16B928(Obj *o)
{
    Item *buf[12];
    Rec *r;
    int n;
    unsigned int i;
    int hit;
    Item *it;
    char *t1;
    char *t2;

    r = o->rec_58;
    if (r->w_24 != 0) {
        func_1DCE78(o, r, D_00234E30, 1.0f);
    } else {
        func_1DCE78(o, r, D_00234E48, 1.0f);
    }
    n = func_01CAA8(buf, 10, &o->pos_30, 0xA9, 0x81, 2, 0, 3.0f);
    hit = 0;
    if (n > 0) {
        for (i = 0; i < n; i++) {
            it = buf[i];
            if (it->cls_40->tag_24 == 0x8166562Cu) {
                func_1B7720(it);
                hit = 1;
            } else if (it->cls_40->fn_20 != 0) {
                it->cls_40->fn_20(it, 0, 3, &o->pos_30, o->dir_20, o, 1000.0f);
                hit = 1;
            }
        }
    }
    if (hit != 0) {
        t2 = D_00223F30;
        t1 = D_0024F650;
        func_0734A0(o, t1, t2);
    }
    func_07E7F0(o, 1);
}
