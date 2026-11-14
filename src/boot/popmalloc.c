/* boot:0x01EAB3E8 -- allocate one block and hand out the queued sub-allocations from it. */
extern unsigned int popmalloc_grand_total;
extern unsigned int D_01EFB024;
extern unsigned int **D_01EFB028;
extern unsigned int *D_01EFB02C;
extern void *radmalloc(unsigned int n);

void *popmalloc(unsigned int bytes)
{
    void *ptr;
    unsigned int t;
    unsigned int i;

    bytes = (bytes + 31) & ~31;
    ptr = radmalloc(popmalloc_grand_total + bytes);
    popmalloc_grand_total = 0;
    if (ptr != 0) {
        t = (unsigned int)ptr + bytes;
        for (i = 0; i < D_01EFB024; i++) {
            *D_01EFB028[i] = t;
            t += D_01EFB02C[i];
        }
    }
    D_01EFB024 = 0;
    return ptr;
}
