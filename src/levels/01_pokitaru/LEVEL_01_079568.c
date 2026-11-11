extern int func_079608(void *obj, int node);
extern void func_079670(void *obj, int a, int b);

void func_079568(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_079608(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_079670(obj, func_079608(obj, cur), prev);
}
