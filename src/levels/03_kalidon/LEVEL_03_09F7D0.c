extern int D_002B74D0[];

void func_09F7D0(void)
{
    int *node = (int *)(unsigned int)D_002B74D0[8];
    while (node != &D_002B74D0[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
