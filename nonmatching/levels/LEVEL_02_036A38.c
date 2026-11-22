/* USA LEVEL_02.REL:0x036A38, 376-byte candidate (21 November 2026).
 * Measured pinned: 21 differing words; first difference at 0x28 (branch
 * offsets).
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Node {
    char pad_00[0x45];
    unsigned char state;
} Node;

typedef struct Handler {
    char pad_00[0x58];
    int (***fn)(void *, void *);
} Handler;

typedef struct Ctx {
    Handler *handler;
    Node *a;
    Node *b;
} Ctx;

typedef struct Actor {
    char pad_00[0x58];
    Ctx *ctx;
} Actor;

typedef struct Pair {
    int a;
    int b;
} Pair;

extern void func_036428(Actor *o);
extern void func_0376A8(Actor *o);
extern void func_036C10(Actor *o);
extern void func_0376B0(Actor *o);

int func_036A38(Actor *o)
{
    Ctx *c;
    Pair p;

    c = o->ctx;
    func_036428(o);
    if (!(*(unsigned *)((char *)*(void **)c + 0x64) & 0xE)) {
        p = (Pair){ c->a->state, c->b->state };
        if (p.a == 3 && p.b == 3) {
            func_0376A8(o);
            func_036C10(o);
            *((char *)o->ctx + 0xAE) = 1;
        } else if (p.a == 2 && p.b == 2) {
            func_0376A8(o);
            func_036C10(o);
        } else if (p.a == 7 && p.b == 7) {
            func_0376B0(o);
            return 1;
        } else if (((p.a == 5 || p.a == 3) && p.b == 5) || (p.a == 5 && p.b == 3)) {
            func_0376B0(o);
            if ((**c->handler->fn)(c->handler, o) == 0) {
                goto clear;
            }
        }
        return 2;
    }
clear:
    c->a->state = 4;
    c->b->state = 4;
    *(int *)c = 0;
    return 0;
}
