extern int func_07FEF0(void *obj, int node);
extern void func_07FF58(void *obj, int a, int b);

void func_07FE50(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_07FEF0(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_07FF58(obj, func_07FEF0(obj, cur), prev);
}
