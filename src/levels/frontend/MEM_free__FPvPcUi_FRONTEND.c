/* FRONTEND:0x01C8A8 -- frees a block; when it is the most recent allocation, rolls the bump pointer back and credits the total. Ported from OpenRAC/rac5-sm-decomp src/boot/MEM_free__FPvPcUi.c (MEM_free__FPvPcUi). */
struct GlobalContextMem {
    char pad00[8];
    unsigned int alloc_current; /* 0x08 */
    unsigned int alloc_recent;  /* 0x0C */
    unsigned int alloc_total;   /* 0x10 */
};
extern struct GlobalContextMem D_001977B8;

void MEM_free__FPvPcUi(void *block, char *name, unsigned int line) {
    (void)name;
    (void)line;
    if (block == (void *)D_001977B8.alloc_recent) {
        unsigned int released = D_001977B8.alloc_current - (unsigned int)block;
        D_001977B8.alloc_current = (unsigned int)block;
        D_001977B8.alloc_total = D_001977B8.alloc_total + released;
    }
}
