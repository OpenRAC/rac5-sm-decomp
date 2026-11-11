extern int func_06A590(void *obj, int node);
extern void func_06A5F8(void *obj, int a, int b);

void func_06A4F0(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_06A590(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_06A5F8(obj, func_06A590(obj, cur), prev);
}
