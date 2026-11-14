/* LEVEL_23:0x12DBC8 -- placement copy of LEVEL_01_13C480.c: spawns a ring effect once, and when the object's measure is high enough queues the follow-up handler and switches its state. */
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

extern void *D_001DA50C;
extern char D_00362CD8[];
extern char D_001EE630[];

extern void func_0F6D18(void *a0, int a1, char *a2, float *a3, float f);
extern float func_073EA8(void *o);
extern int func_0DCD18(void **out, char *cfg, void *src, int a3, int flag_a, int flag_b);
extern void func_12BCF8(Obj *o, int a1, int a2);

void func_12DBC8(Obj *o, Owner *owner)
{
    if (o->count == 0) {
        func_0F6D18(D_001DA50C, 10, D_00362CD8, o->pos, 0.10000000149011612f);
        o->count++;
    }
    if (0.8666667f <= func_073EA8(o)) {
        owner->bEF = 1;
        func_0DCD18(&owner->w38, D_001EE630, o, 1, 1, 1);
        func_12BCF8(o, 0xF, 0);
    }
}
