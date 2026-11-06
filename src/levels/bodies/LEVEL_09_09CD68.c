extern int D_00283DD0[];

void func_09CD68(void)
{
    int *node = (int *)(unsigned int)D_00283DD0[8];
    while (node != &D_00283DD0[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x1c);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
