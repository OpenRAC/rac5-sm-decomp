/* LEVEL_07:0x13F4B8 -- placement copy of LEVEL_01_13C480.c: spawns a ring effect once, and when the object's measure is high enough queues the follow-up handler and switches its state. */
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

extern void *D_0021B40C;
extern char D_003A7098[];
extern char D_002303A0[];

extern void func_105850(void *a0, int a1, char *a2, float *a3, float f);
extern float func_07EC10(void *o);
extern int func_0E9A28(void **out, char *cfg, void *src, int a3, int flag_a, int flag_b);
extern void func_13D5E8(Obj *o, int a1, int a2);

void func_13F4B8(Obj *o, Owner *owner)
{
    if (o->count == 0) {
        func_105850(D_0021B40C, 10, D_003A7098, o->pos, 0.10000000149011612f);
        o->count++;
    }
    if (0.8666667f <= func_07EC10(o)) {
        owner->bEF = 1;
        func_0E9A28(&owner->w38, D_002303A0, o, 1, 1, 1);
        func_13D5E8(o, 0xF, 0);
    }
}
