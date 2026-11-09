/* LEVEL_23:0x096710 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_0026DA90; extern void func_096608(Node *); extern int func_0965E0(int *node);
void func_096710(void){ Node *node = D_0026DA90.first; while (node != (Node *)&D_0026DA90.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_096608(node); } if (node->link == 0) node = (Node *)func_0965E0((int *)node); else node = node->next; } }
