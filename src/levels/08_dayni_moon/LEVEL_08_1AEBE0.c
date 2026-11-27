/* LEVEL_08:0x1AEBE0 -- counts a timer down by a table-scaled step, reporting the two thresholds it crosses and the end state. */
typedef struct {
    char pad0[0x398];
    void *w398;
    char pad39C[0x28];
    float timer;
    char pad3C8[1];
    unsigned char stage;
} State;

typedef struct {
    char pad0[0x45];
    unsigned char mode;
    char pad46[0x12];
    State *state;
} Obj;

extern float D_0026F770[];

extern long long func_0288B8(void);
extern void func_0845F8(void *o, int flag);
extern void func_0BCE20(int a, int b, float x, float y);
extern void func_026EE0(void);

int func_1AEBE0(Obj *o, float dt)
{
    State *s;
    float old;

    if (o->mode == 0 || o->mode == 4 || o->mode == 6 || o->mode == 2) {
        return 1;
    }
    s = o->state;
    old = s->timer;
    s->timer = s->timer - dt / D_0026F770[((int (*)(void))func_0288B8)()];
    if (0.6600000262260437f < old && s->timer <= 0.6600000262260437f) {
        s->stage = 1;
    } else if (0.33000001311302185f < old && s->timer <= 0.33000001311302185f) {
        s->stage = 2;
    } else if (s->timer <= 0.0f) {
        func_0845F8(o, 1);
        func_0845F8(s->w398, 1);
        func_0BCE20(0x662, 0x5A, 1.0f, 0.0f);
        func_026EE0();
        return 3;
    }
    return 2;
}
