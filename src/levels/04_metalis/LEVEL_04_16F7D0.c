/* LEVEL_04:0x16F7D0 -- returns zero in state 3, for the same link value, or when the squared distance between two positions exceeds four; otherwise calls a follow-up and returns one. */

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Sub {
    unsigned char pad00[0x1C];
    void *w1C;
};

struct Node3 {
    unsigned char pad00[0x30];
    struct Vec3 pos;
    unsigned char pad3C[0x45 - 0x3C];
    unsigned char b45;
    unsigned char pad46[0x58 - 0x46];
    struct Sub *sub;
};

extern void func_16FF90(struct Node3 *a0, struct Node3 *a1, void *a2);

int func_16F7D0(struct Node3 *a0, struct Node3 *a1, void *a2, void *a3)
{
    struct Sub *s = a0->sub;
    struct Vec3 *p;
    struct Vec3 *q;
    float dx;
    float dy;
    float dz;
    float d2;

    if (a0->b45 == 3) {
        return 0;
    }
    if (s->w1C == a3) {
        return 0;
    }
    p = &a0->pos;
    q = &a1->pos;
    dx = a1->pos.x - a0->pos.x;
    dy = q->y - p->y;
    dz = q->z - p->z;
    d2 = dx * dx + dy * dy + dz * dz;
    if (!(4.0f < d2)) {
        ((void (*)(struct Node3 *a0, struct Node3 *a1, void *a2, void *a3))func_16FF90)(a0, a1, a2, a3);
        return 1;
    }
    return 0;
}
