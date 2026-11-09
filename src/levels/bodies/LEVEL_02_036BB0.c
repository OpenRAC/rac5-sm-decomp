/* LEVEL_02:0x036BB0 -- stores a computed table address in a sub-record, then writes it into six linked records. */
extern char D_00209250[];

void func_036BB0(char *a0, int a1)
{
    char *p;
    char *q;
    int base;
    unsigned int i;

    p = *(char **)(a0 + 0x58);
    q = *(char **)(p + 4);
    base = (int)D_00209250 + a1 * 68;
    *(int *)(p + 0xA8) = *(unsigned char *)(q + 0x47) * 204 + base;
    for (i = 0; i < 6; i++) {
        *(int *)(*(char **)(p + 0x90 + i * 4) + 0x20) = *(int *)(p + 0xA8);
    }
}
