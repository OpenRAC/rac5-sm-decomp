extern int D_002B3B50[];

void func_0A6338(void)
{
    int *node = (int *)(unsigned int)D_002B3B50[8];
    while (node != &D_002B3B50[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
