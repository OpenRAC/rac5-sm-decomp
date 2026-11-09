/* LEVEL_15.REL:0x12B2C0: reviewed 456-byte candidate, held for ABI review.
 * Starts a positional sound for an object, recycling its voice list node.
 * gnu-ee-trial C with gnu-ee-trial links 456/456 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_12B488 returning void with (pointer, int), but the accepted
 * LEVEL_15_12B488.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Link {
    struct Link *next;
    struct Link *prev;
} Link;

typedef struct Node {
    void *pos;
    Link link;
} Node;

typedef struct Snd {
    char pad_00[0x10];
    unsigned f_10;
    char pad_14[0x14];
    float f_28;
} Snd;

typedef struct Obj {
    Snd *snd;
    Link head;
    int count;
} Obj;

typedef struct Entry {
    char pad_00[0x14];
    unsigned char f_14;
    char pad_15[3];
    float f_18;
    char pad_1C[8];
    int f_24;
    char pad_28[4];
} Entry;

typedef struct Voice {
    char pad_00[0x4C];
    int f_4C;
    int f_50;
} Voice;

extern Entry D_0015D5C8[];
typedef struct Pool {
    Node *head;
} Pool;

extern Pool D_002F36A0;
typedef struct Cnt {
    unsigned val;
} Cnt;

extern Cnt D_00148C38;

extern void func_12B488(Node *n, int idx);
extern Voice *SND_CreatePositionalSound__FPP14SND_Positional(void *a);
extern void SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(
    Voice *v, Snd *s, void *out, void *pos, int b0, int b1,
    float f0, float f1, float f2, float f3, float f4, float f5, unsigned c);
extern void SND_PlayPositionalSound__FP14SND_PositionalUi(Voice *v, unsigned a);

Voice *func_12B2C0(int idx, Obj *obj, void *pos, void **out,
                   float f0, float f1, float f2, float f3)
{
    Entry *e;
    Snd *snd;
    Node *n;
    Node *s;
    Link *l;
    Link *tail;
    Link *a;
    Link *b;
    Link *h;
    Link *nl;
    Voice *v;

    e = &D_0015D5C8[idx];
    snd = obj->snd;
    if (snd == 0) {
        return 0;
    }
    if ((snd->f_10 & 1) == 0 && e->f_24 != -1) {
        if (obj->count == e->f_24) {
            n = (Node *)((char *)obj->head.next - 4);
            func_12B488(n, idx);
            l = obj->head.next;
            b = l->next;
            a = l->prev;
            a->next = b;
            b->prev = a;
            n->link.next = (Link *)D_002F36A0.head;
            D_002F36A0.head = n;
        } else {
            obj->count = obj->count + 1;
        }
        s = D_002F36A0.head;
        D_002F36A0.head = (Node *)s->link.next;
        s->pos = 0;
        out = (void **)s;
        h = &obj->head;
        nl = &s->link;
        tail = h->prev;
        nl->next = h;
        nl->prev = tail;
        tail->next = nl;
        h->prev = nl;
    }
    v = SND_CreatePositionalSound__FPP14SND_Positional(0);
    if (v == 0) {
        return 0;
    }
    if (out != 0) {
        *out = v;
    }
    SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(
        v, snd, out, pos, e->f_14, 0, 0.5f, 0.5f, f0, f1, f2, f3, 0);
    v->f_50 = idx;
    v->f_4C = 0;
    snd->f_28 = e->f_18;
    SND_PlayPositionalSound__FP14SND_PositionalUi(v, D_00148C38.val);
    return v;
}
