extern int D_0029C650[];

void func_09FA48(void)
{
    int *node = (int *)(unsigned int)D_0029C650[8];
    while (node != &D_0029C650[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
