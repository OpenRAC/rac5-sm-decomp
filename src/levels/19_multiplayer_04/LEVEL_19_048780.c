extern void func_069ED0(void *);
extern void func_06F9A8(void *, int);

void func_048780(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_069ED0(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_06F9A8(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
