extern int D_00288510[];

void func_09E068(void)
{
    int *node = (int *)(unsigned int)D_00288510[8];
    while (node != &D_00288510[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x1c);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
