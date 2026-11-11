extern int func_079400(void *obj, int node);
extern void func_079468(void *obj, int a, int b);

void func_079360(void *obj, int target)
{
    int first = *(int *)(*(char **)((char *)obj + 0x48) + 0xDC);
    int prev = first;
    int cur = first;

    if (first != target) {
        if (first == 0)
            return;
        do {
            prev = cur;
            cur = func_079400(obj, prev);
            if (cur == target)
                break;
        } while (cur != 0);
    }
    if (cur != 0 && cur != first)
        func_079468(obj, func_079400(obj, cur), prev);
}
