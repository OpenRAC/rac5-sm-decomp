extern void func_05DF20(void *);
extern void func_061440(void *, int);

void func_03EEA0(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_05DF20(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_061440(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
