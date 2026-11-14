/* PAR_UnitDestroy__FPv -- unlinks a particle unit and its element from their lists and returns the element to the pool. */
extern char gParPool2[];
extern void PAR_FreePool2(void *pool, void *element);

void PAR_UnitDestroy__FPv(int *address) {
    int *node = address - 8;
    int *element = (int *)node[1];

    element[2] = (int)node;
    *(int *)(node[2] + 12) = node[3];
    *(int *)(node[3] + 8) = node[2];
    node[2] = (int)node;
    node[3] = (int)node;
    *(int *)(element[0] + 4) = element[1];
    *(int *)element[1] = element[0];
    PAR_FreePool2(gParPool2, element);
}
