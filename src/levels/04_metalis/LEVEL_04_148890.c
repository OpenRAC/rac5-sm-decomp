/* LEVEL_04:0x148890 -- placement copy of LEVEL_01_13C480.c: spawns a ring effect once, and when the object's measure is high enough queues the follow-up handler and switches its state. */
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

extern void *D_0022052C;
extern char D_003ABF98[];
extern char D_00235030[];

extern void func_10E8D0(void *a0, int a1, char *a2, float *a3, float f);
extern float func_07FF08(void *o);
extern int func_0EE368(void **out, char *cfg, void *src, int a3, int flag_a, int flag_b);
extern void func_1469C0(Obj *o, int a1, int a2);

void func_148890(Obj *o, Owner *owner)
{
    if (o->count == 0) {
        func_10E8D0(D_0022052C, 10, D_003ABF98, o->pos, 0.10000000149011612f);
        o->count++;
    }
    if (0.8666667f <= func_07FF08(o)) {
        owner->bEF = 1;
        func_0EE368(&owner->w38, D_00235030, o, 1, 1, 1);
        func_1469C0(o, 0xF, 0);
    }
}
