extern void func_069DF8(void *);
extern void func_06F940(void *, int);

void func_0494F0(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_069DF8(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_06F940(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
