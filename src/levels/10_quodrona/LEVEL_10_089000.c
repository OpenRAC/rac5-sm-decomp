/* LEVEL_10:0x089000 -- placement copy of LEVEL_01_088C68.c: forwards the first non-null of two record pointers, or returns 0. */
extern int func_088FC0(char *);

int func_089000(char *record)
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
    return func_088FC0((char *)a);
}
