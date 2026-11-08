extern void func_075980(void *);
extern void func_079108(void *, int);

void func_04A258(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_075980(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_079108(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
