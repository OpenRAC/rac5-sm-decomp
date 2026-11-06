extern int func_07B7F8(void *obj, int node);
extern void func_07B860(void *obj, int a, int b);

void func_07B758(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_07B7F8(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_07B860(obj, func_07B7F8(obj, cur), prev);
}
