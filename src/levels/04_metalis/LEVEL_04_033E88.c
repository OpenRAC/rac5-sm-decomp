/* LEVEL_04:0x033E88 -- placement copy of LEVEL_02_036BB0.c: stores a computed table address in a sub-record, then writes it into six linked records. */
extern char D_0020D750[];

void func_033E88(char *a0, int a1)
{
    char *p;
    char *q;
    int base;
    unsigned int i;

    p = *(char **)(a0 + 0x58);
    q = *(char **)(p + 4);
    base = (int)D_0020D750 + a1 * 68;
    *(int *)(p + 0xA8) = *(unsigned char *)(q + 0x47) * 204 + base;
    for (i = 0; i < 6; i++) {
        *(int *)(*(char **)(p + 0x90 + i * 4) + 0x20) = *(int *)(p + 0xA8);
    }
}
