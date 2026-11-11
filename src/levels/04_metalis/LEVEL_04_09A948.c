typedef struct Node Node;
typedef struct Holder Holder;

extern Holder D_2B2AB0;
extern void func_09B488(Holder *list, Node *element);

void func_09A948(int *address)
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
    func_09B488(&D_2B2AB0, (Node *)element);
}
