extern void *func_1DB408(int);
extern void func_1DB450(void);
extern int *func_1DA4A8(void);

void __cp_push_exception(int first, int second, int third)
{
    char *entry = (char *)func_1DB408(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_1DB450;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_1DA4A8();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
