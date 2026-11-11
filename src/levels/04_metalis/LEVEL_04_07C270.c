extern int func_07C310(void *obj, int node);
extern void func_07C378(void *obj, int a, int b);

void func_07C270(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_07C310(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_07C378(obj, func_07C310(obj, cur), prev);
}
