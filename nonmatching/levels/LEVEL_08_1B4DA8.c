/* LEVEL_08.REL:0x1B4DA8: reviewed 176-byte candidate, held for ABI review.
 * Builds a local pair from a selected record, runs a probe, then forwards a
 * table float.
 * pinned C with gnu-ee-trial links 176/176 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_040D98 returning void with (int, int, pointer, int,
 * pointer, float), but the accepted LEVEL_08_040D98.c defines it returning
 * void with (long long, long long, long long, long long, long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Y {
    unsigned char b_00;
    char pad_01[3];
    int w_04;
};

struct Elem {
    char pad_00[0x10];
    struct Y *p_10;
    char pad_14[0x34 - 0x14];
};

struct X {
    char pad_00[4];
    char *base_04;
};

struct G {
    char pad_00[0x40];
    struct X *p_40;
    unsigned char b_44;
};

struct Obj {
    char pad_00[0x30];
    unsigned char b_30;
};

extern struct G *D_0028496C;
extern float D_0026FA38[];
extern unsigned int func_01F898(void *a0, void *a1, void *a2, void *a3, int t0, unsigned int t1, void *t2);
extern int func_0288B8(void);
extern void func_040D98(int a0, int a1, void *a2, int a3, void *t0, float f12);

void func_1B4DA8(struct Obj *o)
{
    unsigned char loc[0x30];
    struct G *g;
    struct Y *y;
    unsigned int r;
    void *s1;

    s1 = (char *)o + 0x30;
    g = D_0028496C;
    y = ((struct Elem *)(g->p_40->base_04 + g->b_44 * 0x34))->p_10;
    r = func_01F898(loc + 0x20, loc, loc + 0x10, s1, y->w_04, y->b_00, g);
    if ((r & 0xFF) != 0) {
        func_040D98(0, 1, s1, 0, o, D_0026FA38[func_0288B8()]);
    }
}
