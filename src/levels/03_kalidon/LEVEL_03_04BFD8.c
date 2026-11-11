extern void func_078C70(void *);
extern void func_07C468(void *, int);

void func_04BFD8(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_078C70(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_07C468(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
