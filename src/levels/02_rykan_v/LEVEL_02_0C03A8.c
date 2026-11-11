extern int func_0B4F68(unsigned int index, int enable);

void func_0C03A8(int *list)
{
    unsigned int index;
    for (index = 0; index < (unsigned int)list[1]; index++) {
        int *entry = *(int **)(*list + index * 4);
        unsigned int key = *(unsigned int *)((char *)entry + 200);
        if (key != 0xffffffffU)
            func_0B4F68(key, 0);
    }
}
