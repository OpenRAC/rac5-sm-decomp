/* LEVEL_18:0x15C8D8 -- per-frame step of an object with an active flag: in state 0 it looks up the managed element for the object and, when that element qualifies, switches to state 1, then unlinks the object's list node; state 2 clears two fields; every state ends with func_15C9B8. */
typedef struct Link {
    struct Link *next;
    char pad04[0x10];
    struct Link *prev;
} Link;

typedef struct {
    char pad000[0x102];
    short h102;
    char pad104[4];
    unsigned short state;
    short h10A;
    char pad10C[0x59C - 0x10C];
    int w59C;
    char pad5A0[0xDD4 - 0x5A0];
    int wDD4;
    char padDD8[0xFD0 - 0xDD8];
    Link link;
} Obj;

typedef struct {
    char pad[0x58];
    void *p58;
} S;

typedef struct {
    char pad[0x58];
    void *info;
    char pad5c[0x24];
} Element;

extern Element *func_15C210(int id);
extern int func_15C1E0(S *s);
extern void func_15C9B8(Obj *o);

void func_15C8D8(Obj *o)
{
    Element *e;
    Link *n;
    Link *p;
    Link *q;

    if (o->w59C != 0) {
        switch (o->state) {
        case 0:
            e = func_15C210((int)o);
            if (e != 0 && func_15C1E0((S *)e) != 0) {
                o->state = 1;
                o->h10A = 1;
            }
            n = &o->link;
            p = n->prev;
            if (p != 0) {
                p->next = n->next;
                q = n->next;
                if (q != 0)
                    q->prev = n->prev;
                n->prev = 0;
            }
            break;
        case 1:
            break;
        case 2:
            o->h102 = 0;
            o->wDD4 = 0;
            break;
        }
        func_15C9B8(o);
    }
}
