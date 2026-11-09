/* LEVEL_01.REL:0x0EFF18: reviewed 152-byte candidate, held for ABI review.
 * Stores four resolved handles and a trailing value into the object, then runs
 * a final helper.
 * pinned C with gnu-ee-trial links 152/152 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_09FB18 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * It declares func_0E6188 returning int with (int), but the accepted
 * LEVEL_01_0E6188.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_002167D8[];
extern void func_09FB18(void *o, void *p);
extern void func_0EFB50(void *o, int *tbl);
extern int func_0E6188(int a);
extern int func_0FCB00(int a);
extern int func_0FF258(int a);
extern int func_0FE850(int a);

void func_0EFF18(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_09FB18(o, D_002167D8);
    o->f_2C = p;
    o->f_1C = func_0E6188(tbl[0]);
    o->f_20 = func_0FCB00(tbl[1]);
    o->f_24 = func_0FF258(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0FE850(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0EFB50(o, tbl);
}
