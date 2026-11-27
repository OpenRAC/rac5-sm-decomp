/* USA LEVEL_15:12B1F8, 168-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 168 bytes: 3 differing words; first difference +0x68. No matching credit.
 * Remaining issue: from 31 words: one-element array head D_002F36A0[1] + a plain Element **slot
 * store stop loop.c load_mems from caching the head; prev loaded before next and node=next after
 * the unlink give retail registers and the 168-byte length; left: the head load is scheduled
 * before the count decrement instead of after its store (count via pointer, statement moves,
 * -fno-sched-interblock tried)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_15:0x12B1F8 -- recycles inactive list nodes into a free list, then refreshes. */
typedef struct Node { struct Node *prev,*next; } Node;
typedef struct Element Element;
struct Element { int active; union { Node links; Element *free_next; } u; };
typedef struct Group { int tag; Node sentinel; int count; int capacity; } Group;
extern Group D_002F2FE0[48];
extern Element *D_002F36A0[1];
extern void func_12B4D0(void);
void func_12B1F8(void)
{
    int i;
    for (i=0; i<48; ++i) {
        Group *group=&D_002F2FE0[i];
        Node *sentinel=&group->sentinel;
        Node *node=sentinel->next;
        while (node != sentinel) {
            Element *element=(Element *)((unsigned char *)node - 4);
            if (element->active) node=node->next;
            else {
                Node *prev=node->prev, *next=node->next;
                next->prev=prev; prev->next=next;
                node=next;
                --group->count;
                {
                    Element **slot=&element->u.free_next;
                    *slot=D_002F36A0[0];
                }
                D_002F36A0[0]=element;
            }
        }
    }
    func_12B4D0();
}
