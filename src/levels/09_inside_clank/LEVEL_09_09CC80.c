/* LEVEL_09:0x09CC80 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_00283DD0; extern void func_09CB78(Node *); extern int func_09CB50(int *node);
void func_09CC80(void){ Node *node = D_00283DD0.first; while (node != (Node *)&D_00283DD0.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_09CB78(node); } if (node->link == 0) node = (Node *)func_09CB50((int *)node); else node = node->next; } }
