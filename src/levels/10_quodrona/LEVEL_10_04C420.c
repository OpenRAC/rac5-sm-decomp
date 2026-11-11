extern void func_079518(void *);
extern void func_07CCA0(void *, int);

void func_04C420(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_079518(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_07CCA0(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
