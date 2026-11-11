extern void func_069530(void *);
extern void func_06F008(void *, int);

void func_047D30(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_069530(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_06F008(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
