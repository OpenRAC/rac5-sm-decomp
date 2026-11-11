struct g7_entry {
    int key;
    char rest[0x24];
};

struct g7_state {
    char pad0[0x3C];
    struct g7_entry entries[256];
    unsigned int count;
    unsigned short idx[512];
    char pad1[9];
    unsigned char flag;
};

extern struct g7_state D_00171F10;
extern void qsort(void *base, unsigned int n, unsigned int size,
                  int (*cmp)(const void *, const void *));
extern int func_074B78(const void *a, const void *b);

void func_074BB8(void)
{
    int buf[512];
    unsigned int i;
    unsigned int j;
    unsigned int n1;
    unsigned int n2;

    n1 = D_00171F10.count;
    for (i = 0; i != n1; i++) {
        buf[i * 2] = D_00171F10.entries[i].key;
        buf[i * 2 + 1] = (int)i;
    }
    qsort(buf, D_00171F10.count, 8, func_074B78);
    n2 = D_00171F10.count;
    for (j = 0; j != n2; j++)
        D_00171F10.idx[j] = (unsigned short)buf[j * 2 + 1];
    D_00171F10.flag = 0;
}
