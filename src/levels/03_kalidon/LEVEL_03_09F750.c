/* LEVEL_03:0x09F750 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_002B74D0; extern void func_09F648(Node *); extern int func_09F620(int *node);
void func_09F750(void){ Node *node = D_002B74D0.first; while (node != (Node *)&D_002B74D0.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_09F648(node); } if (node->link == 0) node = (Node *)func_09F620((int *)node); else node = node->next; } }
