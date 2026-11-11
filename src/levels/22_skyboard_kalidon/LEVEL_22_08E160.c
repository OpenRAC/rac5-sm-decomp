extern int D_001F2210[];

void func_08E160(void)
{
    int *node = (int *)(unsigned int)D_001F2210[8];
    while (node != &D_001F2210[7]) {
        char *owner = (char *)(unsigned int)node[5];
        void (*callback)(int *) = *(void (**)(int *))(owner + 0x1c);
        if (callback != 0) callback(node);
        node = (int *)(unsigned int)node[1];
    }
}
