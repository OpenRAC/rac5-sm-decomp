extern int D_00254198[];

void func_08ED30(void)
{
    int *node = (int *)(unsigned int)D_00254198[8];
    while (node != &D_00254198[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
