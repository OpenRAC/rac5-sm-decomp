/* LEVEL_23:0x13D458 -- placement copy of LEVEL_22_1160A0.c: queues an object in the nearby list if it is within range of a fixed target. */
struct Node {
    char pad0[0x30];
    float pos[3];
};

struct List {
    struct Node *items[0x44];
    int count;
};

extern struct List D_00363498;
extern struct Node D_002025C0;
extern float sqrtf(float x);
extern void func_077FF8(struct Node *n, void *p, int v);
extern char D_0013DD30[];

void func_13D458(struct Node *n)
{
    struct Node *t = &D_002025C0;
    float *pa, *pb;
    float dx, dy, dz, d;

    if (D_00363498.count < 0x40) {
        pa = n->pos;
        pb = t->pos;
        dx = pb[0] - pa[0];
        dy = pb[1] - pa[1];
        dz = pb[2] - pa[2];
        d = sqrtf(dx * dx + dy * dy + dz * dz);
        if (d > 196.0f)
            return;
        D_00363498.items[D_00363498.count] = n;
        if (D_00363498.count <= 0)
            func_077FF8(n, D_0013DD30, 1);
        D_00363498.count++;
    }
}
