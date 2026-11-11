/* LEVEL_01:0x0895C8 -- advances an animation clock and wraps it at both ends of its range, resetting the per-frame counters. */
typedef struct Frames {
    char pad00[8];
    int arr;
} Frames;

typedef struct Entry {
    char pad00[8];
    int val;
    int pad0C;
} Entry;

typedef struct Def {
    char pad00[0xC];
    Entry *tbl[4];
    char pad1C[0x28 - 0x1C];
    float limit;
    char pad2C[3];
    unsigned char cnt[6];
    unsigned char b35;
} Def;

typedef struct Anim {
    char pad00[4];
    Def *def;
    float t;
    char pad0C[4];
    Frames *frames;
    char pad14[0x20 - 0x14];
    unsigned int flags;
    unsigned char b24;
} Anim;

extern int D_001F628C;

extern void func_0894A0(Anim *a);
extern int func_088C28(Anim *a);

void func_0895C8(float dt, Anim *o, int flag, void *unused)
{
    unsigned int i;
    int j;

    o->t = o->t + dt;
    if (flag != 0) {
        func_0894A0(o);
    }
    if (o->def->limit < o->t) {
        o->flags = o->flags | 4;
        if (func_088C28(o) != 0) {
            o->t = o->t - o->def->limit;
            if (o->frames != 0) {
                for (i = 0; i < o->def->cnt[D_001F628C]; i++) {
                    *(int *)(i * 0x70 + o->frames->arr) = 0;
                }
            }
            o->b24 = 0;
        } else {
            o->t = o->def->limit;
        }
    }
    if (o->t < 0.0f) {
        o->flags = o->flags | 4;
        if (func_088C28(o) != 0) {
            o->t = o->t + o->def->limit;
            if (o->frames != 0) {
                for (j = 0; j < o->def->cnt[0]; j++) {
                    *(int *)(j * 0x70 + o->frames->arr) = o->def->tbl[D_001F628C][j].val - 1;
                }
            }
            o->b24 = o->def->b35;
        } else {
            o->t = 0.0f;
        }
    }
}
