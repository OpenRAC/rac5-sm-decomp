/* LEVEL_19:0x08E548 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_00254318; extern void func_08E440(Node *); extern int func_08E418(int *node);
void func_08E548(void){ Node *node = D_00254318.first; while (node != (Node *)&D_00254318.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_08E440(node); } if (node->link == 0) node = (Node *)func_08E418((int *)node); else node = node->next; } }
