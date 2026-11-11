/* LEVEL_01:0x088C68 -- forwards the first non-null of two record pointers, or returns 0. */
extern int func_088C28(char *);

int func_088C68(char *record)
{
    int a;
    char *p;

    p = record;
    a = *(int *)(p + 0x14);
    if (a == 0) {
        a = *(int *)(p + 0x18);
        if (a == 0)
            return 0;
    }
    return func_088C28((char *)a);
}
