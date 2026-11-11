extern void func_075490(void *);
extern void func_079CF8(void *, int);

void func_04B798(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_075490(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_079CF8(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
