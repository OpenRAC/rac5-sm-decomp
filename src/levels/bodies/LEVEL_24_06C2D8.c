/* LEVEL_24:0x06C2D8 -- placement copy of LEVEL_04_074878.c: appends the next segment of a chained effect: interpolates along the first half of the chain, then the second half, linking each new node after the previous one. */
typedef struct Node Node;

struct Node {
    char pad0[0x48];
    Node *next;
};

typedef struct {
    char pad0[0xC];
    char *f_0C;
    char pad10[0x2C];
    Node *f_3C;
    Node *f_40;
    char pad44[6];
    unsigned char f_4A;
} Obj;

typedef struct {
    char pad0[0x1C];
    unsigned int f_1C;
} Src;

extern Node *func_06C8E0(Obj *o, Src *s, char *from, void *a, float t, void *b);

void func_06C2D8(Obj *o, Src *s)
{
    unsigned int idx;
    unsigned int half;
    unsigned int rest;
    char *from;
    Node *n;
    Node *m;

    idx = o->f_4A;
    half = s->f_1C >> 1;
    rest = half + (s->f_1C & 1);
    if (idx == 0) {
        from = o->f_0C;
    } else {
        from = (char *)o->f_40 + 0x20;
    }
    if (idx < half) {
        n = func_06C8E0(o, s, from, o, ((float)idx + 1.0f) / (float)half, o->f_0C);
        if (n == 0) {
            return;
        }
        if (idx == 0) {
            o->f_3C = n;
        }
        if (o->f_40 != 0) {
            o->f_40->next = n;
        }
        o->f_40 = n;
    } else {
        m = func_06C8E0(o, s, from, (char *)o + 0x10, (((float)idx - (float)half) + 1.0f) / (float)rest, (char *)o + 0x30);
        if (m == 0) {
            return;
        }
        o->f_40->next = m;
        o->f_40 = m;
    }
    o->f_4A++;
}
