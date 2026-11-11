extern void *func_1DB8B8(int);
extern void func_1DB900(void);
extern int *func_1DA958(void);

void __cp_push_exception(int first, int second, int third)
{
    char *entry = (char *)func_1DB8B8(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_1DB900;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_1DA958();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
