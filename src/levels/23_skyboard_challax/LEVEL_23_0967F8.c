extern int D_0026DA90[];

void func_0967F8(void)
{
    int *node = (int *)(unsigned int)D_0026DA90[8];
    while (node != &D_0026DA90[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x1c);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
