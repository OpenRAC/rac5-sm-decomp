extern int func_0597E8(void *obj, int node);
extern void func_059850(void *obj, int a, int b);

void func_059748(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_0597E8(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_059850(obj, func_0597E8(obj, cur), prev);
}
