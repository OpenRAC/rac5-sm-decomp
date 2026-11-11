/* LEVEL_03:0x1C4978 -- per-frame state machine of an object's linked effect: depending on the owner's mode byte and a channel test it toggles the object's flag bits, unlinks the effect node when its anchor lookup fails, or re-registers it with a size class chosen from the anchor extent. */
typedef struct Slot {
    char pad0[0x68];
} Slot;

typedef struct Node {
    struct Node *next;
    char pad04[8];
    short f0C;
    char pad0E;
    unsigned char f0F;
    int f10;
    struct Node **prev;
} Node;

typedef struct Inner {
    char pad0[0xBC];
    char *fBC;
    char padC0[0x28];
    Node node;
    unsigned int flags;
    char pad104[2];
    unsigned char f106;
} Inner;

typedef struct Info {
    char pad0[0xA];
    unsigned char f0A;
} Info;

struct Obj {
    char pad0[0x54];
    Info *info;
    Inner *inner;
    char pad5C[8];
    int flags;
};

extern int D_002336F0;
extern Slot D_0024A578[];

extern unsigned int func_027408(int index, unsigned int bit);
extern int func_081B70(float *a, float *b, int c);
extern void func_0951A0(Slot *t, Node *p, float *a, float *b, unsigned int flags);
extern void func_1C4CC0(struct Obj *o);
extern void func_1C1F80(struct Obj *o);
extern void func_1C3098(struct Obj *o);
extern void func_1C3758(struct Obj *o);
extern void func_1C2EC8(char *o, unsigned int st);
extern void func_080918(char *record);

void func_1C4978(struct Obj *o)
{
    float va[3];
    float vb[3];
    Info *info;
    Inner *in;
    Node *p;
    int sel;
    int active;
    int idx;
    int kind;
    float *pa;
    float dx;
    float dz;
    unsigned int t1;
    unsigned int t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int f;

    info = o->info;
    in = o->inner;
    if (info->f0A != 0) {
        sel = 6;
        if (D_002336F0 != 0x17) {
            sel = D_002336F0;
        }
        active = func_027408(sel * 2 + 2, 3) != 0;
        if (info->f0A == 2) {
            if (active == 0) {
                o->flags |= 0x20;
                t1 = in->flags | 8;
                in->flags = t1;
                in->node.f0C = t1;
            } else {
                o->flags &= ~0x20;
                p = &in->node;
                t2 = in->flags & ~8;
                in->flags = t2;
                p->f0C = t2;
                f = in->flags;
                if (func_081B70(va, vb, p->f10) != 0) {
                    dx = vb[0] - va[0];
                    dz = vb[2] - va[2];
                    if (8.0f < dx || 8.0f < dz) {
                        idx = 1;
                    } else {
                        idx = 0;
                    }
                    pa = va;
                    kind = idx;
                    if (p->prev != 0) {
                        *p->prev = p->next;
                        if (p->next == 0) {
                            p->prev = 0;
                        } else {
                            p->next->prev = p->prev;
                            p->prev = 0;
                        }
                    }
                    p->f0F = idx;
                    func_0951A0(&D_0024A578[kind], p, pa, vb, f);
                } else {
                    if (p->prev != 0) {
                        *p->prev = in->node.next;
                        if (in->node.next != 0) {
                            in->node.next->prev = p->prev;
                            p->prev = 0;
                        } else {
                            p->prev = 0;
                        }
                    }
                }
            }
        } else if (info->f0A == 1) {
            if (active == 0) {
                o->flags &= ~0x20;
                t3 = in->flags & ~8;
                in->flags = t3;
                in->node.f0C = t3;
                if (in->f106 != 0) {
                    func_1C4CC0(o);
                    func_1C1F80(o);
                    func_1C3098(o);
                    func_1C3758(o);
                } else {
                    func_1C2EC8((char *)o, 3);
                }
            } else {
                o->flags |= 0x20;
                t4 = in->flags | 8;
                in->flags = t4;
                in->node.f0C = t4;
                if (in->fBC != 0) {
                    func_080918(in->fBC);
                }
            }
        }
    }
}
