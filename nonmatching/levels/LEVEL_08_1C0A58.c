/* LEVEL_08.REL:0x1C0A58: reviewed 344-byte candidate, held for ABI review.
 * Finds the table entry of a given kind, spawns a linked object from it and
 * initializes the object and its child.
 * pinned C with gnu-ee-trial links 344/344 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_030140 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_02F930.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Elem1C0A58 {
    char pad0[0x24];
    unsigned int w24;
    char pad28[0x1C];
};

struct G1C0A58 {
    char pad0[0x34];
    struct Elem1C0A58 *arr;
    unsigned int n;
};

struct Src1C0A58 {
    char pad0[0x10];
    int w10;
    int w14;
    int w18;
    char pad1C[8];
    int w24;
    int w28;
};

struct Child1C0A58 {
    char pad0[0x10];
    int w10;
    int w14;
    int w18;
    char pad1C[0xE];
    unsigned char b2A;
    char pad2B;
    int w2C;
    int w30;
    int w34;
    int w38;
    char pad3C[8];
    int w44;
};

struct Obj1C0A58 {
    float v[4];
    char pad10[0x35];
    unsigned char b45;
    char pad46[0xE];
    struct Child1C0A58 *p54;
};

extern struct G1C0A58 *D_0024FC50;
extern float D_00261B28[4];
extern struct Obj1C0A58 *func_0844E0(struct Elem1C0A58 *e, unsigned int kind, int a, int b);
extern void func_030140(struct Child1C0A58 *ch, struct Obj1C0A58 *o);
extern void func_1C2638(struct Obj1C0A58 *o);
extern void func_1C0EC0(struct Obj1C0A58 *o);

static __inline__ struct Elem1C0A58 *Find_1C0A58(struct G1C0A58 *g, unsigned int kind)
{
    unsigned int i;

    for (i = 0; i < g->n; i++) {
        if (g->arr[i].w24 == kind) {
            return &g->arr[i];
        }
    }
    return 0;
}

static __inline__ void Copy4_1C0A58(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

struct Obj1C0A58 *func_1C0A58(struct Src1C0A58 *src, int param)
{
    struct Elem1C0A58 *found;
    struct Obj1C0A58 *obj;
    struct Child1C0A58 *ch;

    found = Find_1C0A58(D_0024FC50, 0x4FF0E803);
    if (found == 0) {
        obj = 0;
    } else {
        obj = func_0844E0(found, 0x4FF0E803, 0, 2);
    }
    if (obj == 0) {
        return 0;
    }
    ch = obj->p54;
    ch->w2C = src->w24;
    ch->w34 = 0;
    ch->w30 = src->w10;
    ch->w18 = src->w14;
    ch->w14 = 0;
    ch->b2A = 0;
    ch->w10 = src->w18;
    ch->w44 = src->w28;
    func_030140(ch, obj);
    ch->w38 = param;
    obj->b45 = 1;
    Copy4_1C0A58(obj->v, D_00261B28);
    func_1C2638(obj);
    func_1C0EC0(obj);
    return obj;
}
