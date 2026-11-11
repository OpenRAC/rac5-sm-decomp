extern int func_079CA8(void *obj, int node);
extern void func_079D10(void *obj, int a, int b);

void func_079C08(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_079CA8(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_079D10(obj, func_079CA8(obj, cur), prev);
}
