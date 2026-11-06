extern void *func_025248(int);
extern void func_025290(void);
extern int *func_0242E8(void);

void func_025300(int first, int second, int third)
{
    char *entry = (char *)func_025248(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_025290;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_0242E8();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
