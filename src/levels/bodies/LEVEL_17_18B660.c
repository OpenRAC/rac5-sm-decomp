extern void *func_18B5A8(int);
extern void func_18B5F0(void);
extern int *func_18A648(void);

void func_18B660(int first, int second, int third)
{
    char *entry = (char *)func_18B5A8(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_18B5F0;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_18A648();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
