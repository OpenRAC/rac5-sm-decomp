extern void func_082AF8(int *list);

void func_082230(int *obj)
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
            func_082AF8(list);
            for (i = 0; i < obj[7]; i++) {
                func_082AF8(*(int *)(obj[8 + i] + 8));
            }
        }
    }
}
