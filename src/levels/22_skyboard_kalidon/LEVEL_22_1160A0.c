/* LEVEL_22:0x1160A0 -- queues an object in the nearby list if it is within range of a fixed target. */
struct Node {
    char pad0[0x30];
    float pos[3];
};

struct List {
    struct Node *items[0x44];
    int count;
};

extern struct List D_002E7880;
extern struct Node D_00186D40;
extern float sqrtf(float x);
extern void func_073620(struct Node *n, void *p, int v);
extern char D_00116978[];

void func_1160A0(struct Node *n)
{
    struct Node *t = &D_00186D40;
    float *pa, *pb;
    float dx, dy, dz, d;

    if (D_002E7880.count < 0x40) {
        pa = n->pos;
        pb = t->pos;
        dx = pb[0] - pa[0];
        dy = pb[1] - pa[1];
        dz = pb[2] - pa[2];
        d = sqrtf(dx * dx + dy * dy + dz * dz);
        if (d > 196.0f)
            return;
        D_002E7880.items[D_002E7880.count] = n;
        if (D_002E7880.count <= 0)
            func_073620(n, D_00116978, 1);
        D_002E7880.count++;
    }
}
