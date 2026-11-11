extern int func_06BFC8(void *obj, int node);
extern void func_06C030(void *obj, int a, int b);

void func_06BF28(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_06BFC8(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_06C030(obj, func_06BFC8(obj, cur), prev);
}
