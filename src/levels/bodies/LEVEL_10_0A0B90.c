extern int D_002A5A50[];

void func_0A0B90(void)
{
    int *node = (int *)(unsigned int)D_002A5A50[8];
    while (node != &D_002A5A50[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x1c);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
