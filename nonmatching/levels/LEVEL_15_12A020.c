/* LEVEL_15.REL:0x12A020: reviewed 312-byte candidate, held for ABI review.
 * Seeds two emitter records and the shared parameters with random values.
 * gnu-ee-trial C with ps2eeas links 312/312 bytes and is byte-exact at this
 * and 1 other USA placement, but the prototypes disagree.
 * It declares func_129888 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_15_129888.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern void func_129888(char *dst, char *src, int a);

void func_12A020(struct Obj *o, struct Tab **tbl, int arg)
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
