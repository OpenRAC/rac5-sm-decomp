extern int func_075C20(void *obj, int node);
extern void func_075C88(void *obj, int a, int b);

void func_075B80(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_075C20(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_075C88(obj, func_075C20(obj, cur), prev);
}
