extern void func_080700(void *);
extern void func_0845F8(void *, int);

void func_052E80(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_080700(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_0845F8(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
