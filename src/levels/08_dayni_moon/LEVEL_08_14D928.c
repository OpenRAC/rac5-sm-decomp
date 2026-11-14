/* LEVEL_08:0x14D928 -- placement copy of LEVEL_01_13C480.c: spawns a ring effect once, and when the object's measure is high enough queues the follow-up handler and switches its state. */
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

extern void *D_0024FFCC;
extern char D_003E0A18[];
extern char D_002654A0[];

extern void func_112DE0(void *a0, int a1, char *a2, float *a3, float f);
extern float func_084A18(void *o);
extern int func_0F3A78(void **out, char *cfg, void *src, int a3, int flag_a, int flag_b);
extern void func_14BA58(Obj *o, int a1, int a2);

void func_14D928(Obj *o, Owner *owner)
{
    if (o->count == 0) {
        func_112DE0(D_0024FFCC, 10, D_003E0A18, o->pos, 0.10000000149011612f);
        o->count++;
    }
    if (0.8666667f <= func_084A18(o)) {
        owner->bEF = 1;
        func_0F3A78(&owner->w38, D_002654A0, o, 1, 1, 1);
        func_14BA58(o, 0xF, 0);
    }
}
