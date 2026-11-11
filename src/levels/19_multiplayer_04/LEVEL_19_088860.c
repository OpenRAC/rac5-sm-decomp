typedef struct Node Node;
typedef struct Holder Holder;

extern Holder D_24E870;
extern void func_0893A0(Holder *list, Node *element);

void func_088860(int *address)
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
    func_0893A0(&D_24E870, (Node *)element);
}
