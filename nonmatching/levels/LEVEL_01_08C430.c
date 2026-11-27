/* USA LEVEL_01:08C430, 232-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: -fno-gcse.
 * Compiled 232 bytes: 32 differing words; first difference +0x4. No matching credit.
 * Remaining issue: register allocation + tail order: insert-before relink now reads b->prev once
 * (retail), -fno-gcse recomputes the 0x1F high late like retail; left: o/n/sel/best register
 * numbering (retail copies n into t2 for the loop compare, sel a2/best a3), stamp load and store
 * placed before the owner test, nop-filled delay slot in the loop; global-count-in-condition
 * loop forms are worse (240 B)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x08C430 -- picks the oldest eligible entry, relinks it in its list and attaches it to the object. */
typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct Head { Node *first; Node *x; } Head;
typedef struct Obj Obj;
typedef struct Ent { Node link; char pad8[4]; Obj *owner; Head *head; unsigned stamp; } Ent;
typedef struct Rec { unsigned key; int pad4; Ent *ent; } Rec;
typedef struct Q { int f0; unsigned f4; } Q;
typedef struct P { Q *q; } P;
struct Obj { P *p; int active; char pad8[8]; Ent *ent; };
extern int D_001F6278;
extern Rec *D_0023F038;
extern unsigned D_001F3FB8;
extern void func_089CB8(Obj *o);

void func_08C430(Obj *o)
{
    if (o->active) {
        unsigned limit = o->p->q->f4;
        unsigned best = 0xFFFFFFFF;
        unsigned i = 0;
        Ent *sel = 0;
        unsigned n = D_001F6278;

        if (n != 0) {
            Rec *r = D_0023F038;

            do {
                i++;
                if (!(r->key < limit)) {
                    Ent *e = r->ent;

                    if (e->stamp < best) {
                        sel = e;
                        best = e->stamp;
                    }
                }
                r++;
            } while (i < n);
        }
        {
            Node *a = sel->head->x;
            Node *b;
            Node *p;
            Node *nx = a->next;
            Node *pv = a->prev;

            pv->next = nx;
            nx->prev = pv;
            b = sel->head->first;
            p = b->prev;
            sel->link.next = b;
            sel->link.prev = p;
            p->next = &sel->link;
            b->prev = &sel->link;
        }
        if (sel->owner)
            sel->owner->ent = 0;
        sel->stamp = D_001F3FB8;
        sel->owner = o;
        o->ent = sel;
        func_089CB8(o);
    }
}
