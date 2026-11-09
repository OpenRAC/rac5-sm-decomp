/* LEVEL_16.REL:0x1703A0: reviewed 240-byte candidate, held for ABI review.
 * Picks the next state of an actor from a probe result.
 * pinned C with gnu-ee-trial links 240/240 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_02F0A0 returning int with (pointer, pointer, int, int, int,
 * int, float, float), but the accepted LEVEL_16_02F0A0.c defines it returning
 * void with (pointer, pointer, pointer, pointer, int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x30];
    int f30;
} Aux;

typedef struct {
    char pad0[0x5C];
    int f5C;
    char pad60[8];
    unsigned char b68;
} Cfg;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0xE];
    Aux *aux;
    Cfg *cfg;
} Actor;

extern int func_170490(Actor *a);
extern void func_16FB28(Actor *a, int state);
extern int func_02F0A0(Aux *aux, Actor *a, int c, int d, int e, int f, float g, float h);

int func_1703A0(Actor *a)
{
    Aux *aux = a->aux;
    Cfg *cfg = a->cfg;
    int state = a->state;
    int r;

    if (func_170490(a) != 0) {
        func_16FB28(a, 10);
        return 10;
    }
    r = func_02F0A0(aux, a, cfg->f5C, aux->f30, cfg->b68, 0, 0.1f, 2.0f);
    if (r == 2) {
        state = 5;
        func_16FB28(a, 5);
    } else if (r == 1) {
        state = 6;
        func_16FB28(a, 6);
    } else if (r == 0) {
        state = 3;
        func_16FB28(a, 3);
    }
    return state;
}
