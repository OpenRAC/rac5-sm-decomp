extern void func_07F760(void *);
extern void func_082F58(void *, int);

void func_052A90(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_07F760(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_082F58(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
