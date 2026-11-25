/* FRONTEND:0x012390 -- placement copy of LEVEL_01_0B9A98.c. */
extern int func_00FF68(unsigned int index, int enable);

void func_012390(int *list, int unused)
{
    unsigned int index;
    (void)unused;
    for (index = 0; index < (unsigned int)list[1]; index++) {
        int *entry = *(int **)(*list + index * 4);
        unsigned int key = *(unsigned int *)((char *)entry + 200);
        if (key != 0xffffffffU)
            func_00FF68(key, 0);
    }
}
