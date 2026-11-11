extern int func_05E6B0(void *obj, int node);
extern void func_05E718(void *obj, int a, int b);

void func_05E610(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_05E6B0(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_05E718(obj, func_05E6B0(obj, cur), prev);
}
