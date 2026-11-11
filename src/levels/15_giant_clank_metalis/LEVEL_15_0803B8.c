extern int D_001B4690[];

void func_0803B8(void)
{
    int *node = (int *)(unsigned int)D_001B4690[8];
    while (node != &D_001B4690[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
