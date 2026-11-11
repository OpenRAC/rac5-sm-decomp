extern void func_072300(void *);
extern void func_076268(void *, int);

void func_04A470(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_072300(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_076268(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
