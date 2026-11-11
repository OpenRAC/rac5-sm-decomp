extern int D_0026DA90[];

void func_096790(void)
{
    int *node = (int *)(unsigned int)D_0026DA90[8];
    while (node != &D_0026DA90[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
