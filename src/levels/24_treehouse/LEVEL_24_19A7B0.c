/* LEVEL_24:0x19A7B0 -- per-frame update of a proximity prompt: registers the handler while idle, otherwise counts the timer down to re-arm, refreshes the transform and, when the player stands close, shows the prompt text once. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[0x1C];
    void *link_58;
    char pad_5C[8];
    int flags_64;
    char pad_68[8];
    float t_70;
} Obj;

typedef struct {
    char pad_00[0x10];
    int text_10;
} Prompt;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
} Player;

extern Player D_00201040;
extern char D_001D75A0[];
extern char D_00362568[];

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0FC988(void *a, char *b, int c);
extern void func_19A760(void);
extern void func_092430(void (*fn)(void), Obj *o, int a, int b);
extern void func_119FD0(float *v, float f);
extern void func_11AD78(Obj *a, Obj *b, float *v);
extern int func_022400(int a, int b);
extern Prompt *func_022448(int a, int b);
extern void func_021908(Player *p, int a);
extern char *func_127FB0(int a);
extern void func_0B2778(void);
extern void func_0B28E8(char *s, int a, int b);
extern void func_022E18(int a, int b);

static __inline__ float Dist2(Vec3 *a, Vec3 *b)
{
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dz = a->z - b->z;

    return dx * dx + dy * dy + dz * dz;
}

void func_19A7B0(Obj *o)
{
    float v[12];
    Prompt *p;
    Player *pl;
    void *link;

    link = o->link_58;
    if ((o->flags_64 & 0x20) == 0) {
        func_0FC988(link, D_001D75A0, 2);
        func_092430(func_19A760, o, 0, 0);
    } else {
        o->t_70 = o->t_70 + 1.0f;
        if (!(900.0f < o->t_70)) {
            return;
        }
        o->t_70 = 0.0f;
        o->flags_64 = o->flags_64 & ~0x20;
    }
    func_119FD0(v, 0.10471976548433304f);
    func_11AD78(o, o, v);
    pl = &D_00201040;
    if (Dist2(&o->pos_30, &pl->pos_30) < 1.0f) {
        func_022400(0xE, -1);
        p = func_022448(0xE, -1);
        if (p != 0) {
            func_021908(pl, 0xE);
            sprintf(D_00362568, func_127FB0(0x238), func_127FB0(p->text_10));
            func_0B2778();
            func_0B28E8(D_00362568, 0, 0x5A);
            func_022E18(0xE, -1);
        }
        o->flags_64 = o->flags_64 | 0x20;
    }
}
