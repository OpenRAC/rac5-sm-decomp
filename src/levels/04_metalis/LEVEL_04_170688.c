/* LEVEL_04:0x170688 -- sets a local divisor, clears two fields of a sub-record, stores a random remainder in the object, and returns 1. */
extern void func_1F30B8(char *p);
extern int rand(void);

int func_170688(char *a0)
{
    int d;
    char *p;

    d = 2;
    p = *(char **)(a0 + 0x58);
    func_1F30B8(p);
    p[0x3C] = 0;
    *(int *)(p + 0x50) = 0;
    a0[0x46] = rand() % d;
    return 1;
}
