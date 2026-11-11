/* LEVEL_01:0x18B9D8 -- steps the actor's three-phase state toward the requested direction, spawning the effect at the entry of the middle phases. */
typedef struct {
    char pad_00[0x14];
    float v14;
    float v18;
    float v1C;
    float v20;
} Fx;

typedef struct {
    float w0;
    Fx *w4;
    int pad_08;
    int w0C;
} State;

typedef struct {
    char pad_00[0x45];
    unsigned char phase;
    char pad_46[0x12];
    State *state;
} Actor;

extern Fx *D_002085C4[1];
extern char D_00235140[];
extern int func_038A38(char *object);
extern void func_0809D0(void *obj, void *rec, void *p, int e, int f, int g, int h, int i, float a, float b, float c, float d);

static __inline__ void Spawn(Actor *a, int *slot, Fx *rec)
{
    if (rec != 0)
        func_0809D0(a, rec, slot, 1, 0, 1, 0, 1, rec->v14, rec->v18, rec->v1C, rec->v20);
}

void func_18B9D8(Actor *a, int mode)
{
    State *s;
    unsigned char ok;
    unsigned char next;
    Fx *g;

    s = a->state;
    ok = func_038A38(D_00235140);
    if (mode != 0) {
        switch (a->phase) {
        case 0:
            s->w0 = 1.0f;
            g = D_002085C4[0];
            if (g != 0 && ok) {
                Spawn(a, &s->w0C, g);
            } else {
                Spawn(a, &s->w0C, s->w4);
            }
            next = 3;
            break;
        case 2:
            a->phase = 1;
            return;
        case 4:
            g = D_002085C4[0];
            if (g != 0 && ok) {
                Spawn(a, &s->w0C, g);
            } else {
                Spawn(a, &s->w0C, s->w4);
            }
            next = 1;
            break;
        default:
            return;
        }
    } else {
        switch (a->phase) {
        case 0:
            s->w0 = 0;
            next = 4;
            break;
        case 1:
        case 3:
            next = 2;
            break;
        default:
            return;
        }
    }
    a->phase = next;
}
