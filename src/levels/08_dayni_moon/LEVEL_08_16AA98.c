/* LEVEL_08:0x16AA98 -- placement copy of LEVEL_02_165AA8.c: state step of an object: states 0 and 2 start the idle action (state 1), state 1 fires its effect once the check passes (state 3), state 3 unlinks the record from its list and finishes. */
typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *back;
    int w18;
} Node;

typedef struct Obj {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x12];
    Node *rec;
} Obj;

extern int func_084A40(Obj *o, int a1);
extern void func_084AC8(Obj *o, float t, unsigned int idx);
extern int func_1E8040(Obj *o, int a1);
extern void func_084C98(Obj *o, int a, int b, int c, float x, float y);
extern void func_0845F8(Obj *o, int a);

void func_16AA98(Obj *o)
{
    Node *r = o->rec;

    switch (o->state) {
    case 0:
        if (func_084A40(o, 0) != 0) {
            o->state = 1;
            func_084AC8(o, 0.0f, 1);
        }
        break;
    case 1:
        if (func_1E8040(o, r->w18) != 0) {
            func_084C98(o, 3, 0, 1, 0.15f, 0.0f);
            o->state = 3;
        }
        break;
    case 2:
        if (func_084A40(o, 0) != 0) {
            o->state = 1;
            func_084AC8(o, 0.0f, 1);
        }
        break;
    case 3:
        if (func_084A40(o, 0) != 0) {
            if (r->back != 0) {
                r->back->next = r->next;
                if (r->next != 0)
                    r->next->back = r->back;
                r->back = 0;
            }
            func_0845F8(o, 1);
        }
        break;
    }
}
