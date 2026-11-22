/* USA LEVEL_01.REL:0x08C320, 252-byte candidate (21 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x44.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x44];
    unsigned char parent;
    char pad45[0x50 - 0x45];
} Joint;

typedef struct {
    int w00;
    int w04;
    Joint *joints;
} Skel;

typedef struct {
    float m[12];
} Mat;

typedef struct {
    char pad00[0x14];
    int *w14;
    int *w18;
} Obj;

extern int D_001F628C;
extern Mat D_0023D830[];

extern void func_08C270(void *dst, void *src);
extern void func_1257D0(void *dst, void *a, void *b);

void func_08C320(Obj *o, void *out, int index)
{
    float m[16];
    int *list;
    Skel *s;
    int parent;

    list = (o->w18 != 0) ? o->w18 : o->w14;
    s = (Skel *)((int *)*(int *)list)[D_001F628C];
    func_08C270(out, &D_0023D830[index]);
    parent = s->joints[index].parent;
    while (parent != 0xFF) {
        func_08C270(m, &D_0023D830[parent]);
        func_1257D0(out, out, m);
        parent = s->joints[parent].parent;
    }
}
