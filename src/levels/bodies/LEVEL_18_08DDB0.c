extern int D_00254518[];

void func_08DDB0(void)
{
    int *node = (int *)(unsigned int)D_00254518[8];
    while (node != &D_00254518[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x1c);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
