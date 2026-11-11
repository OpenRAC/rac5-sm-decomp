/* LEVEL_08:0x0AA2C8 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_002EB8D0; extern void func_0AA1C0(Node *); extern int func_0AA198(int *node);
void func_0AA2C8(void){ Node *node = D_002EB8D0.first; while (node != (Node *)&D_002EB8D0.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_0AA1C0(node); } if (node->link == 0) node = (Node *)func_0AA198((int *)node); else node = node->next; } }
