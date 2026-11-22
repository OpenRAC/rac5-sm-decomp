/* LEVEL_06:0x1882F0 -- snaps an effect object onto its parent's position, plays the one-shot burst on first use and registers its follow-up. */
struct Probe_1882F0 {
    char pad0[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
};

struct Parent_1882F0 {
    float *src;
    char pad04[4];
    float f08;
    float pos[3];
    char pad14[0x30 - 0x14];
};

struct Obj_1882F0 {
    char pad00[0x30];
    float x;
    float y;
    float z;
    char pad3c[0xA];
    unsigned char fresh;
    char pad47[0x58 - 0x47];
    struct Parent_1882F0 *parent;
    char pad5c[8];
    unsigned int flags;
};

static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

extern struct Probe_1882F0 *D_001F777C;
extern char D_00383A28[];
extern void func_188460(void);
extern void func_07A5B0(void *a0, struct Probe_1882F0 *a1, float *a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);
extern void func_074978(float *a0, char *a1);
extern void func_0921E8(void *fn, void *obj, int a2, int a3);

void func_1882F0(struct Obj_1882F0 *o)
{
    struct Parent_1882F0 *p;

    p = o->parent;
    o->flags |= 0x20;
    Copy3(&o->x, p->src + 12);
    o->y += p->f08;
    if (o->fresh) {
        if (D_001F777C != 0) {
            func_07A5B0(o, D_001F777C, (float *)((char *)p + 0xC), 0, 0, 0, 0, 1, D_001F777C->f14, D_001F777C->f18,
                        D_001F777C->f1c, D_001F777C->f20);
        }
        o->fresh = 0;
    }
    func_074978((float *)((char *)p + 0x10), D_00383A28);
    func_0921E8(func_188460, o, 0, 0);
}
