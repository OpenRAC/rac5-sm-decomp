/* LEVEL_01.REL:0x0D4550: reviewed 392-byte candidate, held for ABI review.
 * Caches the selected entry's data in a global record, then dispatches on the
 * current state flags and reports the entry's value.
 * pinned C with gnu-ee-trial links 392/392 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0BA408 returning pointer with (pointer), but the accepted
 * FRONTEND_0129E8.c defines it returning int with (pointer).
 * It declares func_135DC0 returning int with (pointer), but the accepted
 * FRONTEND_0025B0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Ent {
    char pad_00[0xD0];
    unsigned int w_D0;
    void *p_D4;
    int w_D8;
    int w_DC;
};

struct Mgr {
    char pad_00[0x20];
};

struct Cache {
    int w_00;
    int w_04;
    int w_08;
    int w_0C[4];
    unsigned char b_1C;
    char pad_1D[3];
};

extern struct Cache D_0032CDB8;
extern struct Mgr D_0032CDD8;
extern int D_00204A74;

extern struct Ent *func_0BA408(struct Mgr *m);
extern int func_135DC0(void *h);
extern int func_135DD0(void *h);
extern unsigned int func_135DB8(void *h);
extern void func_135DA0(void *h, unsigned int n, int *out);
extern unsigned int func_088020(int id);
extern int func_0BCB20(void);
extern void func_01A828(int a, int b);
extern void func_0B6020(int a);
extern void func_135DD8(void *h, unsigned int n);
extern int func_135DE0(void *h);
extern void func_135E38(int a, unsigned char b, unsigned char c);
extern void func_0B96A8(struct Mgr *m, unsigned int flags);
extern int func_135DA8(void *h, unsigned int n);
extern void func_134070(int a, int b);

void func_0D4550(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0BA408(&D_0032CDD8);
    if (e != 0 && e->p_D4 != 0) {
        D_0032CDB8.w_00 = func_135DC0(e->p_D4);
        D_0032CDB8.w_04 = func_135DD0(e->p_D4);
        D_0032CDB8.w_08 = e->w_DC;
        D_0032CDB8.b_1C = e->w_D0 >= func_135DB8(e->p_D4);
        func_135DA0(e->p_D4, e->w_D0, D_0032CDB8.w_0C);
    }
    flags = func_088020(0x6B10);
    if (flags & 8) {
        func_01A828(4, 0);
    } else if (flags & 0x1000) {
        if (func_0BCB20() == 0) {
            func_01A828(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0B6020(1);
            func_01A828(4, 0);
            func_135DD8(e->p_D4, e->w_D0);
            func_135E38(D_00204A74, func_135DE0(e->p_D4), e->w_D0);
        }
    } else {
        func_0B96A8(&D_0032CDD8, flags);
    }
    func_134070(0, e != 0 ? func_135DA8(e->p_D4, e->w_D0) : 0);
    func_134070(1, 0x1F);
}
