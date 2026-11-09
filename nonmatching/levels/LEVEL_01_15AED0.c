/* LEVEL_01.REL:0x15AED0: reviewed 632-byte candidate, held for ABI review.
 * Per-frame behaviour step: proximity test, then picks the next action.
 * gnu-ee-trial C with gnu-ee-trial links 632/632 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_15D610 returning int with (int, int), but the accepted
 * LEVEL_01_15D610.c defines it returning int with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x2C];
    int target;
    char pad30[4];
    int sel;
    int mode;
    char pad3C[0xC];
    int other;
} Info;
typedef struct {
    char pad0[0x60];
    int timer;
    char pad64[0x18];
    signed char choice;
    char pad7D[3];
    unsigned char kind;
} State;
typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3C[9];
    unsigned char id;
    char pad46[0xE];
    Info *info;
    State *state;
} Obj;

extern void func_15D3D0(void *);
extern int func_084708(int, void *);
extern void func_01A2A0(float *);
extern int func_07CE40(Obj *);
extern int func_07CAB8(Obj *, int);
extern void func_07CD28(Obj *, int, int, int, float, float);
extern int func_15D3A0(void);
extern int func_16C950(int, int);
extern int func_15D610(int, int);
extern void func_15C260(Obj *, int, int);
extern int rand(void);

static inline void sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static inline float len2(float *a)
{
    return a[0] * a[0] + a[1] * a[1] + a[2] * a[2];
}

static inline unsigned char in_range(Obj *o, Info *info)
{
    int buf0[4];
    float v[4];
    float delta[4];

    if (!info->target)
        return 0;
    func_15D3D0(buf0);
    if (!func_084708(info->target, buf0))
        return 0;
    if (info->other) {
        if (func_084708(info->other, buf0))
            return 0;
    }
    func_01A2A0(v);
    sub3(delta, v, o->pos);
    if (len2(delta) <= 625.0f)
        return 1;
    return 0;
}

void func_15AED0(Obj *o)
{
    Info *info = o->info;
    State *st = o->state;
    int r;

    if (in_range(o, info)) {
        func_15C260(o, o->id, 5);
        return;
    }
    st->timer = st->timer - 1;
    if (func_07CE40(o) == 7) {
        if (func_07CAB8(o, 0)) {
            func_07CD28(o, 6, 0, 1, 0.0f, 0.0f);
            st->timer = func_15D3A0();
            return;
        }
    }
    if (st->timer > 0)
        return;
    if (info->mode && func_16C950(info->mode, st->kind))
        r = 2;
    else {
        int n = rand() >> 8;

        if (info->sel)
            r = n % 4;
        else
            r = n % 3;
    }
    switch (r) {
    case 3:
        st->choice = func_15D610(info->sel, info->target);
        if (st->choice != -1) {
            func_15C260(o, o->id, 0x12);
            break;
        }
    case 0:
        func_07CD28(o, 7, 0, 1, 0.15f, 0.0f);
        st->timer = 0x7FFFFFFF;
        break;
    case 1:
        func_15C260(o, o->id, 0x10);
        break;
    case 2:
        func_15C260(o, o->id, 0x11);
        break;
    }
}
