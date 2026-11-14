/* LEVEL_09:0x135460 -- placement copy of LEVEL_01_13C480.c: spawns a ring effect once, and when the object's measure is high enough queues the follow-up handler and switches its state. */
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

extern void *D_001F0C0C;
extern char D_00378F18[];
extern char D_002051C0[];

extern void func_0FFD10(void *a0, int a1, char *a2, float *a3, float f);
extern float func_079528(void *o);
extern int func_0E4EE8(void **out, char *cfg, void *src, int a3, int flag_a, int flag_b);
extern void func_133590(Obj *o, int a1, int a2);

void func_135460(Obj *o, Owner *owner)
{
    if (o->count == 0) {
        func_0FFD10(D_001F0C0C, 10, D_00378F18, o->pos, 0.10000000149011612f);
        o->count++;
    }
    if (0.8666667f <= func_079528(o)) {
        owner->bEF = 1;
        func_0E4EE8(&owner->w38, D_002051C0, o, 1, 1, 1);
        func_133590(o, 0xF, 0);
    }
}
