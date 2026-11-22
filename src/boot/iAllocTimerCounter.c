/* boot:0x01ED9AB0 -- pops a free timer-counter node from the free list and returns its tagged handle. Ported from OpenRAC/rac3-decomp src/boot_elf/core/125878.c (func_00125878). */
typedef struct {
    unsigned char p0[0xC];
    int xC;
    int x10;
    int x14;
} G;
typedef struct {
    int next;
    unsigned char p4[0x4];
    int x8;
    int xC;
    unsigned char p10[0x8];
    int x18;
    int x1C;
    int x20;
    int x24;
    int x28;
} N;
extern G D_01EFFF90;

int iAllocTimerCounter(void) {
    N *n;
    int i; int v; int c; int u; int t;
    n = (N *)D_01EFFF90.x14;
    if (n == 0) {
        return 0x80008005;
    }
    i = *(volatile int *)&D_01EFFF90.x10;
    u = (int)n << 4;
    v = *(volatile int *)&n->next;
    t = i + 1;
    do {
        *(volatile int *)&n->x28 = 0;
        D_01EFFF90.x10 = t;
        n->xC = 0;
        D_01EFFF90.x14 = v;
        c = D_01EFFF90.xC;
        *(unsigned long *)&n->x18 = 0;
        D_01EFFF90.xC = c + 1;
        n->x8 = (((*(volatile int *)&D_01EFFF90.xC) << 1) & 0x3FE) | 1;
        return u | *(volatile int *)&n->x8;
    } while (0);
}
