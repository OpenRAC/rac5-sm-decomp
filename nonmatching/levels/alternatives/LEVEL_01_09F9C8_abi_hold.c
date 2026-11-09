/* LEVEL_01.REL:0x09F9C8: reviewed 128-byte candidate, held for ABI review.
 * Walks a circular node list, calling a per-node callback when one is set.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_09F898 returning pointer with (pointer), but the accepted
 * LEVEL_01_09F898.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_0029C650; extern void func_09F8C0(Node *); extern Node *func_09F898(Node *);
void func_09F9C8(void){ Node *node = D_0029C650.first; while (node != (Node *)&D_0029C650.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_09F8C0(node); } if (node->link == 0) node = func_09F898(node); else node = node->next; } }
