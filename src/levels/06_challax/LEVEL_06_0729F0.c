extern int func_072A90(void *obj, int node);
extern void func_072AF8(void *obj, int a, int b);

void func_0729F0(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_072A90(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_072AF8(obj, func_072A90(obj, cur), prev);
}
