extern int func_06AC38(void *obj, int node);
extern void func_06ACA0(void *obj, int a, int b);

void func_06AB98(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_06AC38(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_06ACA0(obj, func_06AC38(obj, cur), prev);
}
