/* LEVEL_10:0x163E28 -- event handler of a shootable target (time step and event ids): counts its health down, reports a hit or kills it and bumps the global kill counter. */
typedef struct Obj Obj;

typedef struct {
    char pad00[0x24];
    char sub[0x34];
    float health;
} Rec;

typedef struct {
    char pad00[0x13734];
    int w13734;
} Game;

struct Obj {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x12];
    Rec *rec;
};

extern Game *D_001FCFAC;
extern float D_00229000[];
extern float D_00229010[];
extern char D_00229020[];
extern int D_00223780;
typedef struct {
    char pad[6];
    unsigned short count;
    unsigned char kills;
    char pad9[3];
    unsigned char limit;
} Counter;

extern Counter D_0023A330;

extern void func_1E0240(float f, Obj *o, int a, int b);
extern void func_07CCA0(Obj *o, int x);
extern void func_014810(char *p, Obj *o, int a, int b, int c);
extern long func_07A270(Obj *o);
extern void func_07A178(Obj *o, unsigned int mask, char *tbl, int x);
extern void func_1D1E70(float a, float b, char *p, Obj *o, int c, int d, int e);
extern void func_164290(Obj *o, int x);

int func_163E28(float dt, Obj *o, int ev, int who, int a, int b, int c)
{
    Rec *r;
    unsigned int st;

    st = o->state;
    if (st == 0)
        return 0;
    if (st - 7 < 3)
        return 1;
    if (ev == 10) {
        func_1E0240(0.2f, o, D_001FCFAC->w13734, 0x15);
        func_07CCA0(o, 1);
    } else {
        r = o->rec;
        r->health = r->health - dt;
        func_014810(r->sub, o, a, b, c);
        if (r->health <= 0.0f) {
            if (ev == 0xB) {
                func_1E0240(0.2f, o, D_001FCFAC->w13734, 0x15);
                func_07CCA0(o, 1);
            } else {
                func_1D1E70(D_00229000[who], D_00229010[who], (char *)r + 0x30, o, a, b, c);
                func_164290(o, 7);
            }
            if (D_00223780 != 10)
                return 3;
            if ((unsigned int)(D_0023A330.limit - 1) < 0x3F)
                D_0023A330.kills = D_0023A330.kills + 1;
            return 3;
        }
        if (who == 0 && func_07A270(o) != 0)
            return 2;
        func_07A178(o, 0xFF0000FF, D_00229020, 0);
        return 2;
    }
    return 3;
}
