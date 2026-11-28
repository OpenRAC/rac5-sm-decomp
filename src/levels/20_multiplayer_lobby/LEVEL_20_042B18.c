extern void func_059050(void *);
extern void func_05E948(void *);

void func_042B18(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_059050(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        ((void (*)(void *, int))func_05E948)(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
