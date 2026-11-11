extern int func_073D70(void *obj, int node);
extern void func_073DD8(void *obj, int a, int b);

void func_073CD0(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_073D70(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_073DD8(obj, func_073D70(obj, cur), prev);
}
