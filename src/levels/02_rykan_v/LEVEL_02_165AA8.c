/* LEVEL_02:0x165AA8 -- state step of an object: states 0 and 2 start the idle action (state 1), state 1 fires its effect once the check passes (state 3), state 3 unlinks the record from its list and finishes. */
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

extern int func_0833A0(Obj *o, int a1);
extern void func_083428(Obj *o, float t, unsigned int idx);
extern int func_1D21D8(Obj *o, int a1);
extern void func_0835F8(Obj *o, int a, int b, int c, float x, float y);
extern void func_082F58(Obj *o, int a);

void func_165AA8(Obj *o)
{
    Node *r = o->rec;

    switch (o->state) {
    case 0:
        if (func_0833A0(o, 0) != 0) {
            o->state = 1;
            func_083428(o, 0.0f, 1);
        }
        break;
    case 1:
        if (func_1D21D8(o, r->w18) != 0) {
            func_0835F8(o, 3, 0, 1, 0.15f, 0.0f);
            o->state = 3;
        }
        break;
    case 2:
        if (func_0833A0(o, 0) != 0) {
            o->state = 1;
            func_083428(o, 0.0f, 1);
        }
        break;
    case 3:
        if (func_0833A0(o, 0) != 0) {
            if (r->back != 0) {
                r->back->next = r->next;
                if (r->next != 0)
                    r->next->back = r->back;
                r->back = 0;
            }
            func_082F58(o, 1);
        }
        break;
    }
}
