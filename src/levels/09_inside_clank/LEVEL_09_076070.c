extern int func_076110(void *obj, int node);
extern void func_076178(void *obj, int a, int b);

void func_076070(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_076110(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_076178(obj, func_076110(obj, cur), prev);
}
