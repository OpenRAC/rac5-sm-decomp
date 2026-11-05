int func_09F898(int *node)
{
    int next = node[1];
    *(int *)(node[0] + 4) = next;
    *(int *)node[1] = node[0];
    node[0] = 0;
    node[1] = 0;
    return next;
}
