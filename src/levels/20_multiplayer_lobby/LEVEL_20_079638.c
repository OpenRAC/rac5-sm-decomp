extern int D_001779D8[];

void func_079638(void)
{
    int *node = (int *)(unsigned int)D_001779D8[8];
    while (node != &D_001779D8[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
