extern void func_070150(void *);
extern void func_073A88(void *, int);

void func_046EE8(char *context)
{
    void *first = *(void **)(context + 0x59C);
    void *second;

    if (first != 0)
        func_070150(first);

    second = *(void **)(context + 0xDA4);
    if (second != 0) {
        func_073A88(second, 1);
        *(void **)(context + 0xDA4) = 0;
    }
}
