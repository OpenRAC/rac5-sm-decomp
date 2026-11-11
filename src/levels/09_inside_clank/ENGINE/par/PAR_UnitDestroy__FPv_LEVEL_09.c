typedef struct Node Node;
typedef struct Holder Holder;

extern Holder D_27FA30;
extern void func_094C30(Holder *list, Node *element);

void PAR_UnitDestroy__FPv(int *address)
{
    int *node = address - 8;
    int *element = (int *)node[1];
    element[2] = (int)node;
    *(int *)(node[2] + 12) = node[3];
    *(int *)(node[3] + 8) = node[2];
    node[2] = (int)node;
    node[3] = (int)node;
    *(int *)(element[0] + 4) = element[1];
    *(int *)element[1] = element[0];
    func_094C30(&D_27FA30, (Node *)element);
}
