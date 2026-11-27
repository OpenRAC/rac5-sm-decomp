/* LEVEL_02:0x1629B8 -- two-state timer handler: starts at once or on its trigger, then on a second trigger finishes, otherwise advances its clock and fires its tick at the limit. */
typedef struct Conf {
    float limit;
    char pad0[8 - 4];
    int trigA;
    int trigB;
    char pad1[0x18 - 0x10];
    unsigned char halve;
} Conf;

typedef struct Obj {
    char pad0[0x45];
    unsigned char state;
    char pad1[0x54 - 0x46];
    Conf *conf;
    char pad2[0x70 - 0x58];
    float t;
} Obj;

extern char D_0024C650[];

extern int func_08B060(int a, void *b);
extern void func_082F58(Obj *o, int a);
extern void func_162BC0(Obj *o);
extern void func_162AD0(Obj *o);

void func_1629B8(Obj *o, float dt)
{
    Conf *c;

    c = o->conf;
    if (o->state == 0) {
        if (c->trigA != 0) {
            char *base = D_0024C650;

            if (func_08B060(c->trigA, base + 0x30) == 0) {
                return;
            }
        }
        o->t = 0.0f;
        o->state = 1;
        return;
    }
    if (o->state != 1) {
        return;
    }
    if (c->trigB != 0) {
        char *base = D_0024C650;

        if (func_08B060(c->trigB, base + 0x30) != 0) {
            func_082F58(o, 1);
            return;
        }
    }
    func_162BC0(o);
    if (c->halve != 0 ? c->limit * 0.5f < o->t : c->limit < o->t) {
        func_162AD0(o);
    }
    o->t = o->t + dt;
}
