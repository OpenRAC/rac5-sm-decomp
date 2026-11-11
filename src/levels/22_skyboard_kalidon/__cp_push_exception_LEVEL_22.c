extern void *func_14B878(int);
extern void func_14B8C0(void);
extern int *func_14A918(void);

void __cp_push_exception(int first, int second, int third)
{
    char *entry = (char *)func_14B878(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_14B8C0;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_14A918();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
