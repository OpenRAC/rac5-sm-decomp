/* LEVEL_01:0x1ABD18 -- resets the object: sets its timer to 60.0, clears its mode byte and the three counters and two words of its state record, sets a 0.8 factor and returns 1. */
typedef struct {
    int w0;
    int w4;
    int arr[3];
    char pad14[0x24 - 0x14];
    float f24;
    char pad28[0x34 - 0x28];
    int w34;
} State;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    State *state;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

int func_1ABD18(Obj *o)
{
    State *s;
    unsigned int i;

    s = o->state;
    o->f70 = 60.0f;
    o->b45 = 0;
    for (i = 0; i < 3; i++)
        s->arr[i] = 0;
    s->w34 = 0;
    s->w4 = 0;
    s->f24 = 0.80000007f;
    return 1;
}
