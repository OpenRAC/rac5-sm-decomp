extern void *func_1D6328(int);
extern void func_1D6370(void);
extern int *func_1D53C8(void);

void func_1D63E0(int first, int second, int third)
{
    char *entry = (char *)func_1D6328(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_1D6370;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_1D53C8();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
