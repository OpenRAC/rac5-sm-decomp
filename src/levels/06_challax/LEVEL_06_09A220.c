extern int D_002893D0[];

void func_09A220(void)
{
    int *node = (int *)(unsigned int)D_002893D0[8];
    while (node != &D_002893D0[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x18);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
