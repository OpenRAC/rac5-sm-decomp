/* LEVEL_04:0x0A4BE0 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_002B6E50; extern void func_0A4AD8(Node *); extern int func_0A4AB0(int *node);
void func_0A4BE0(void){ Node *node = D_002B6E50.first; while (node != (Node *)&D_002B6E50.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_0A4AD8(node); } if (node->link == 0) node = (Node *)func_0A4AB0((int *)node); else node = node->next; } }
