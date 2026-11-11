/* LEVEL_15:0x12B0B0 -- resets a 48-entry self-linked pool, then links a second table. */

extern void func_12B008(void);
extern unsigned char D_002F2FE0[];
extern unsigned char D_002F36A0[];

void func_12B0B0(void)
{
    unsigned char *base;
    unsigned char *p;
    unsigned char *start;
    unsigned char *end;
    unsigned char *node;
    unsigned char *nx;
    int i;

    func_12B008();
    p = D_002F2FE0;
    p += 4;
    for (i = 47; i >= 0; i--) {
        *(unsigned int *)(p + 4) = (unsigned int)p;
        *(unsigned int *)p = (unsigned int)p;
        p += 0x14;
    }
    base = D_002F36A0;
    start = base - 0x300;
    end = base - 0xC;
    node = start;
    while (node != end) {
        nx = node + 0xC;
        *(unsigned int *)(node + 4) = (unsigned int)nx;
        node = nx;
    }
    *(unsigned int *)base = (unsigned int)start;
    *(unsigned int *)(start + 0x2F8) = 0;
}
