/* LEVEL_15:0x12A020 -- seeds two emitter records and the shared parameters with random values. */
struct Rec {
    float r;
    char sub[0x30];
};

struct Ent {
    char pad0[0x14];
    char f14[0xA8];
};

struct Tab {
    char pad0[8];
    struct Ent ents[2];
};

struct Obj {
    struct Rec recs[2];
    float f68;
    float f6C;
    float f70;
    float f74;
    float f78;
    float f7C;
    float f80;
};

extern int rand(void);
extern void func_129888(char *dst, char *src, void *a);

void func_12A020(struct Obj *o, struct Tab **tbl, void *arg)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        o->recs[i].r = (float)rand() * 4.6566123179658803e-10f;
        func_129888((char *)o + 4 + i * 0x34, (*tbl)->ents[i].f14, arg);
    }
    o->f68 = (float)rand() * 4.6566123179658803e-10f;
    o->f6C = (float)rand() * 4.6566123179658803e-10f;
    o->f70 = (float)rand() * 4.6566123179658803e-10f;
    o->f74 = 1.0f;
    o->f78 = 0.0f;
    o->f7C = 1.0f;
    o->f80 = 0.0f;
}
