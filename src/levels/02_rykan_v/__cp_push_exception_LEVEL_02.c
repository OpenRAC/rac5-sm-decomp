extern void *func_201158(int);
extern void func_2011A0(void);
extern int *func_2001F8(void);

void __cp_push_exception(int first, int second, int third)
{
    char *entry = (char *)func_201158(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_2011A0;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_2001F8();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
