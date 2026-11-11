extern void func_0735E0(void *);
extern void func_076D68(void *, int);

void func_046D00(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_0735E0(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_076D68(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
