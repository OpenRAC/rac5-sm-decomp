extern void func_08A050(int *list);

void func_089788(int *obj)
{
    int i;
    int index;
    int *list;

    if (obj[6] == 0 && (index = obj[4]) != -1) {
        list = (int *)obj[5];
        if (list != 0 && *(int *)(list[0] + index * 4) != 0) {
            obj[3] = index;
            obj[4] = -1;
            i = 0;
            func_08A050(list);
            for (i = 0; i < obj[7]; i++) {
                func_08A050(*(int *)(obj[8 + i] + 8));
            }
        }
    }
}
