extern void func_06B838(void *);
extern void func_06F170(void *, int);

void func_043408(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_06B838(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_06F170(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
