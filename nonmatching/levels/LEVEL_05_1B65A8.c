/* USA LEVEL_05.REL:0x1B65A8, 104-byte candidate (14 November 2026).
 * Measured pinned: 25 differing words; first difference at 4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct State {
    int time;
    char pad4[0xC];
    float angle;
} State;

typedef struct Obj {
    char pad0[0x20];
    float dx;
    char pad24[4];
    float dz;
    char pad2C[0x54 - 0x2C];
    State *state;
} Obj;

extern int D_001F5E14;
extern float atan2f(float y, float x);

int func_1B65A8(Obj *o)
{
    State *s = o->state;
    int t = s->time;
    int running = t != 0;

    s->time = D_001F5E14 + t;
    if (running) {
        s->angle = atan2f(-o->dz, -o->dx);
        return 1;
    }
    return 0;
}
