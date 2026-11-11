/* LEVEL_18:0x08DCC8 -- placement copy of LEVEL_01_09F9C8.c: walks a circular node list, calling a per-node callback when one is set. */
typedef struct Node { int p0; struct Node *next; int p8[3]; int *info; int link; } Node;
typedef struct List { char p0[0x1C]; int sentinel; Node *first; } List;
extern List D_00254518; extern void func_08DBC0(Node *); extern int func_08DB98(int *node);
void func_08DCC8(void){ Node *node = D_00254518.first; while (node != (Node *)&D_00254518.sentinel) { void (*cb)(Node *) = *(void (**)(Node *))((char *)node->info + 0x14); if (cb != 0) { cb(node); func_08DBC0(node); } if (node->link == 0) node = (Node *)func_08DB98((int *)node); else node = node->next; } }
