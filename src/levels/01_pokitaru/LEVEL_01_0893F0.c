/* LEVEL_01:0x0893F0 -- placement copy of LEVEL_02_08FCE8.c. */
extern void func_089CB8(int *list);

void func_0893F0(int *obj)
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
            func_089CB8(list);
            for (i = 0; i < obj[7]; i++) {
                func_089CB8(*(int *)(obj[8 + i] + 8));
            }
        }
    }
}
