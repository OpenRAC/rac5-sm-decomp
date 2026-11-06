extern void *func_199400(int);
extern void func_199448(void);
extern int *func_1984A0(void);

void func_1994B8(int first, int second, int third)
{
    char *entry = (char *)func_199400(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_199448;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_1984A0();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
