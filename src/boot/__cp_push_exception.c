/* 0x01E98190 -- allocates and fills a C++ exception record and pushes it on the current exception chain. Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__cp_push_exception_FRONTEND.c (__cp_push_exception_FRONTEND). */
extern void *__eh_alloc(int);
extern void __cplus_type_matcher(void);
extern int *__get_eh_info(void);

void __cp_push_exception(int first, int second, int third)
{
    char *entry = (char *)__eh_alloc(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = __cplus_type_matcher;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = __get_eh_info();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
