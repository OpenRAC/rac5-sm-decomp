/* LEVEL_10:0x13A308 -- placement copy of LEVEL_01_13C480.c: spawns a ring effect once, and when the object's measure is high enough queues the follow-up handler and switches its state. */
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

extern void *D_0020FD6C;
extern char D_0039AB98[];
extern char D_00224600[];

extern void func_104008(void *a0, int a1, char *a2, float *a3, float f);
extern float func_07D0C0(void *o);
extern int func_0E9940(void **out, char *cfg, void *src, int a3, int flag_a, int flag_b);
extern void func_138438(Obj *o, int a1, int a2);

void func_13A308(Obj *o, Owner *owner)
{
    if (o->count == 0) {
        func_104008(D_0020FD6C, 10, D_0039AB98, o->pos, 0.10000000149011612f);
        o->count++;
    }
    if (0.8666667f <= func_07D0C0(o)) {
        owner->bEF = 1;
        func_0E9940(&owner->w38, D_00224600, o, 1, 1, 1);
        func_138438(o, 0xF, 0);
    }
}
