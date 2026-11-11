extern int func_069CC8(void *obj, int node);
extern void func_069D30(void *obj, int a, int b);

void func_069C28(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_069CC8(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_069D30(obj, func_069CC8(obj, cur), prev);
}
