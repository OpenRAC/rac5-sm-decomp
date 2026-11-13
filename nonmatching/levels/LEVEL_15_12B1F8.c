/* USA LEVEL_15.REL:0x12B1F8, 168-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 164 linked bytes; first differing word +0x28.
 * Unaccepted; no matching credit. Recover unlink and free-list aliasing; typed and generic pointer spelling both hoist the free-list head and change node live ranges.
 */
/* Recycle inactive intrusive-list entries, then refresh the pooled state. */
typedef struct Node { struct Node *prev,*next; } Node;
typedef struct Element Element;
struct Element { int active; union { Node links; Element *free_next; } u; };
typedef struct Group { int tag; Node sentinel; int count; int capacity; } Group;
extern Group D_002F2FE0[48];
extern Element *D_002F36A0;
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
                Node *next=node->next, *prev=node->prev;
                node=next;
                next->prev=prev; prev->next=next;
                --group->count;
                element->u.free_next=D_002F36A0;
                D_002F36A0=element;
            }
        }
    }
    func_12B4D0();
}
