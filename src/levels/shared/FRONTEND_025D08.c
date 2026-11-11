typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
} Node;

typedef struct {
    Node **array;
    unsigned int count;
} List;

void func_025D08(Node *node, List *list, unsigned int *lo, unsigned int *hi)
{
    unsigned int mn = *lo;
    unsigned int mx = *hi;

    while (node->f0 != 0)
    {
        if (node->f4 != 0 && node->f8 != 0)
        {
            list->array[list->count++] = node;
            if (node->f8 < mn)
                mn = node->f8;
            if (mx < (unsigned int)(node->f8 + node->fC))
                mx = (unsigned int)(node->f8 + node->fC);
        }
        node = (Node *)((char *)node + node->f0 + 4);
    }
    *lo = mn;
    *hi = mx;
}
