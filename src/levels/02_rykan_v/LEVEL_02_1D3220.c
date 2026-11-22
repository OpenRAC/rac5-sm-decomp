/* LEVEL_02:0x1D3220 -- per-frame mode switch of an object: while mode 1 it advances four wrapped angles from a table and leaves the mode when the sound state allows it; otherwise it enters mode 1 when the pending event word asks for it. */
typedef struct Pair {
    unsigned int lo;
    unsigned int hi;
} Pair;

typedef struct State {
    char pad00[4];
    unsigned short h[4];
} State;

typedef struct Obj {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x58 - 0x47];
    State *state;
} Obj;

typedef struct Ent {
    char pad00[0xC];
    unsigned short h;
    char pad0E[2];
} Ent;

typedef struct Cfg {
    char pad00[0x24];
    int f24;
} Cfg;

typedef struct Snd {
    char pad00[4];
    unsigned int f04;
} Snd;

extern Ent D_0023FE20[];
extern Cfg *D_00208C2C;

extern Pair func_040B88(void);
extern char *func_08E7A8(int mask);
extern void func_0835F8(Obj *o, int idx, int c, int d, float a, float b);

void func_1D3220(Obj *o)
{
    unsigned int lo;
    State *s;
    Snd *t;
    unsigned int i;
    unsigned int x;
    unsigned int v;

    s = o->state;
    lo = func_040B88().lo;
    if (o->b46 == 1) {
        t = (Snd *)func_08E7A8(2);
        i = 0;
        do {
            v = s->h[i] + D_0023FE20[i].h;
            s->h[i] = v;
            if ((unsigned short)v > 0x800) {
                s->h[i] = v - 0x800;
            }
            i++;
        } while (i < 4);
        if ((t->f04 & (D_00208C2C->f24 == 2 ? 0x2200 : 0x2000)) == 0) {
            o->b45 = 0;
            o->b46 = 0;
            func_0835F8(o, 0, 0, 1, 0.1f, 0.0f);
        }
    } else if ((lo & 0x20) != 0) {
        t = (Snd *)func_08E7A8(2);
        if ((t->f04 & (D_00208C2C->f24 == 2 ? 0x2200 : 0x2000)) != 0) {
            o->b46 = 1;
            o->b45 = 4;
            func_0835F8(o, 3, 0, 1, 0.1f, 0.0f);
        }
    }
}
