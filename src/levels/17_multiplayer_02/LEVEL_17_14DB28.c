/* LEVEL_17:0x14DB28 -- when the level gate is clear, wipes the object's state block, arms it (flag byte, 10.0 timer) and sets the object's mode byte; returns 1, or -1 when the gate is set. */
typedef struct State {
    char pad_00[0x44];
    float timer;
    char pad_48[1];
    unsigned char armed;
} State;

typedef struct Obj {
    char pad_00[0x58];
    State *state;
    char pad_5C[0x1B];
    unsigned char mode;
} Obj;

extern void *memset(void *p, int c, unsigned int n);
extern unsigned int func_112590(void);

int func_14DB28(Obj *o)
{
    State *s;

    if (func_112590() != 0) {
        return -1;
    }
    s = o->state;
    memset(s, 0, 0x4C);
    s->armed = 1;
    s->timer = 10.0f;
    o->mode = 0x30;
    return 1;
}
