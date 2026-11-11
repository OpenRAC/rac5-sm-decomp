/* LEVEL_01:0x09F9C8 -- walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_0029C650; extern void func_09F8C0(Node *); extern int func_09F898(int *node);
void func_09F9C8(void){ Node *node = D_0029C650.first; while (node != (Node *)&D_0029C650.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_09F8C0(node); } if (node->link == 0) node = (Node *)func_09F898((int *)node); else node = node->next; } }
