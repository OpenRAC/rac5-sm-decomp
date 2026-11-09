/* LEVEL_02:0x0A62B8 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_002B3B50; extern void func_0A61B0(Node *); extern int func_0A6188(int *node);
void func_0A62B8(void){ Node *node = D_002B3B50.first; while (node != (Node *)&D_002B3B50.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_0A61B0(node); } if (node->link == 0) node = (Node *)func_0A6188((int *)node); else node = node->next; } }
