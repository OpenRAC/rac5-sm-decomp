/* LEVEL_06:0x1AF938 -- picks the next state of an actor from a probe result. */
typedef struct { void *subject; char result[8]; } Probe;
typedef struct { char pad[0x5D]; unsigned char v; } Tail;
typedef struct { char pad[0x45]; unsigned char state; char pad2[0x54 - 0x46]; Probe *p54; Tail *p58; } Actor;
extern int func_1B0060(Actor *o);
extern void func_1AF0A8(Actor *o, int s);
extern int func_02F5B0(void *p, Actor *o, void * a, int b, int c, float f, float g);

int func_1AF938(Actor *obj)
{
    Probe *q = obj->p54;
    Tail *t = obj->p58;
    unsigned char st = obj->state;
    int r;

    if (func_1B0060(obj)) {
        func_1AF0A8(obj, 0x16);
        return 0x16;
    }
    r = func_02F5B0(q->result, obj, q->subject, t->v, 0, 0.1f, 2.0f);
    if (r == 2) {
        st = 0x11;
        func_1AF0A8(obj, st);
    } else if (r == 1) {
        st = 0x12;
        func_1AF0A8(obj, st);
    } else if (r == 0) {
        st = 0xF;
        func_1AF0A8(obj, st);
    }
    return st;
}
