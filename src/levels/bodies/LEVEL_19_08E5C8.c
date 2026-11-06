extern int D_00254318[];

void func_08E5C8(void)
{
    int *node = (int *)(unsigned int)D_00254318[8];
    while (node != &D_00254318[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
