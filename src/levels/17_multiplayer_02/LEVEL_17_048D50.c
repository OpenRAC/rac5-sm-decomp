extern void func_06A4A0(void *);
extern void func_06FF78(void *, int);

void func_048D50(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_06A4A0(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_06FF78(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
