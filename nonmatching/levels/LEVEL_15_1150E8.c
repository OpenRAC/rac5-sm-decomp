/* LEVEL_15.REL:0x1150E8: reviewed 148-byte candidate, held for ABI review.
 * Stores four resolved handles from an argument table into the object.
 * pinned C with gnu-ee-trial links 148/148 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_080488 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Obj15_1150E8 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj15_1150E8;

extern char D_001706B8[];
extern void func_080488(void *o, void *p);
extern void func_114140(void *p);
extern int func_12BFB0(int a);
extern int func_12E158(int a);
extern int func_0FB1D0(int a);
extern int func_0CDAD8(int a);

void func_1150E8(Obj15_1150E8 *o, void *p, int *tbl) {
    int v;

    func_080488(o, D_001706B8);
    func_114140(p);
    o->f_2C = p;
    o->f_1C = func_12BFB0(tbl[0]);
    o->f_20 = func_12E158(tbl[1]);
    o->f_24 = func_0FB1D0(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0CDAD8(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
}
