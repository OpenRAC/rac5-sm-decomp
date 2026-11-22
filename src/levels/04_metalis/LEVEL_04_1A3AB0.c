/* LEVEL_04:0x1A3AB0 -- ticks the object's timer down and runs its four-state cycle: states 0 and 2 advance when the timer runs out, states 1 and 3 wait for the animation to finish and then restart the cycle with a fresh timer. */
typedef struct {
    char pad00[0x34];
    unsigned char b34;
} Sub;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x12];
    Sub *sub;
    char pad5C[0x14];
    float timer;
} Obj;

extern int func_07FF30(Obj *o, int a);
extern void func_080188(Obj *o, int state, int a, int b, float f, float g);

void func_1A3AB0(Obj *o)
{
    Sub *sub;

    o->timer = o->timer - 1.0f;
    switch (o->state) {
    case 0:
    case 2:
        if (o->timer <= 0.0f) {
            o->state = o->state + 1;
            func_080188(o, o->state, 0, 1, 0.15f, 0.0f);
        }
        break;
    case 1:
        if (func_07FF30(o, 0) != 0) {
            o->state = 2;
            func_080188(o, 2, 0, 1, 0.15f, 0.0f);
            o->timer = 60.0f;
        }
        break;
    case 3:
        if (func_07FF30(o, 0) != 0) {
            o->state = 0;
            sub = o->sub;
            func_080188(o, 0, 0, 1, 0.15f, 0.0f);
            o->timer = 60.0f;
            sub->b34 = 0;
        }
        break;
    }
}
