extern void *func_204B50(int);
extern void func_204B98(void);
extern int *func_203BF0(void);

void func_204C08(int first, int second, int third)
{
    char *entry = (char *)func_204B50(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_204B98;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_203BF0();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
