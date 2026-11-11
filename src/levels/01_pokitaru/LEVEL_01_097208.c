/* LEVEL_01:0x097208 -- checks whether a node is reachable through its indexed list head. */

typedef struct Node097208 {
    unsigned char pad_00[8];
    struct Node097208 *p_08;
    struct Node097208 *p_0C;
    unsigned short h_10;
} Node097208;

typedef struct Ent097208 {
    unsigned char pad_00[0x10];
    unsigned char pad_10[0xC];
    Node097208 *f_1C;
    unsigned char pad_20[8];
} Ent097208;

extern Ent097208 D_002982CC[];
extern int D_0029AACC;

int func_097208(Node097208 *n) {
    int idx;
    Ent097208 *e;
    Node097208 *p;
    void *sent;

    if (n->p_08 == 0 || n->p_0C == 0) {
        return 0;
    }
    idx = n->h_10;
    if (idx < 0 || !(idx < D_0029AACC)) {
        return 0;
    }
    if (n->p_08 == n) {
        if (n->p_0C == n) {
            return 1;
        }
    }
    e = &D_002982CC[idx];
    sent = (void *)((unsigned char *)e + 0x10);
    p = e->f_1C;
    while ((void *)p != sent) {
        if (p == n) {
            return 1;
        }
        p = p->p_0C;
    }
    return 0;
}
