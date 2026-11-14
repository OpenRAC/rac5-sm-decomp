/* LEVEL_24:0x131F60 -- placement copy of LEVEL_01_13C480.c: spawns a ring effect once, and when the object's measure is high enough queues the follow-up handler and switches its state. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x46 - 0x3C];
    unsigned char count;
} Obj;

typedef struct {
    char pad00[0x38];
    void *w38;
    char pad3C[0xEF - 0x3C];
    unsigned char bEF;
} Owner;

extern void *D_001D7D8C;
extern char D_0035D658[];
extern char D_001EC2C0[];

extern void func_0FBA40(void *a0, int a1, char *a2, float *a3, float f);
extern float func_077188(void *o);
extern int func_0DFDF8(void **out, char *cfg, void *src, int a3, int flag_a, int flag_b);
extern void func_130090(Obj *o, int a1, int a2);

void func_131F60(Obj *o, Owner *owner)
{
    if (o->count == 0) {
        func_0FBA40(D_001D7D8C, 10, D_0035D658, o->pos, 0.10000000149011612f);
        o->count++;
    }
    if (0.8666667f <= func_077188(o)) {
        owner->bEF = 1;
        func_0DFDF8(&owner->w38, D_001EC2C0, o, 1, 1, 1);
        func_130090(o, 0xF, 0);
    }
}
