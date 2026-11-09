/* LEVEL_04:0x1E4C58 -- steps an animation state machine and picks the next entry. */
typedef struct Ent2C { float thr; char pad4[0x28]; } Ent2C;
typedef struct Cfg {
    Ent2C *ents;
    int f4;
    unsigned short h8;
    unsigned short hA;
} Cfg;
typedef struct St {
    float x;
    char pad4[0x58];
    unsigned short h5C_unused;
} St;
typedef struct StB {
    float x;
    char pad4[0x54];
    char at58[0x30];
    unsigned short cnt;
    unsigned char flag;
} StB;
typedef struct Obj { char pad0[0x58]; StB *st; } Obj;
typedef struct Aux { char pad0[0x14]; float f14, f18, f1C, f20; } Aux;

extern Aux *D_003B3E80;
extern void func_1F4AD0(void *p);
extern void func_083E30(Obj *o, Aux *a, int b, int c, int d, int e, int f, int g,
                        float f0, float f1, float f2, float f3);
extern void func_031D58(StB *s, Obj *o, Ent2C *e, float a, float b);
extern void func_0326E0(StB *s, Obj *o, void *p, Ent2C *e, int f4);

void func_1E4C58(Obj *o, int doit, Cfg *cfg, float a, float b)
{
    StB *s;
    float x;
    Ent2C *e;

    s = o->st;
    func_1F4AD0(&s->at58[4]);
    if (s->cnt != 0) {
        s->cnt--;
    } else if (s->flag != 0) {
        s->flag = 0;
        s->cnt = cfg->hA;
    } else if (doit != 0) {
        if (D_003B3E80 != 0) {
            func_083E30(o, D_003B3E80, 0, 0, 0, 0, 0, 1,
                        D_003B3E80->f14, D_003B3E80->f18, D_003B3E80->f1C, D_003B3E80->f20);
        }
        s->flag = 1;
        x = s->x;
        s->cnt = cfg->h8;
        if (x <= 0.0f) {
            s->x = x + -0.4000000357627869f;
        } else {
            s->x = x + (x / cfg->ents->thr * -0.19999998807907104f + -0.4000000357627869f);
        }
    }
    if (s->flag != 0) {
        func_031D58(s, o, cfg->ents + 1, a, 1.0f);
    } else if (cfg->ents->thr < s->x) {
        func_031D58(s, o, cfg->ents + 1, a, 0.0f);
    } else {
        func_031D58(s, o, cfg->ents, a, b);
    }
    func_0326E0(s, o, (char *)s + 0x8B, cfg->ents + s->flag, cfg->f4);
}
