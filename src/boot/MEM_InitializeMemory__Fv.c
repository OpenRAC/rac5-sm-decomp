/* MEM_InitializeMemory__Fv -- probes the C heap, clears the global memory context and reserves the main game heap. */
typedef struct {
    void *base;
    unsigned int size;
    void *cursor;
    void *last;
    unsigned int remaining;
    unsigned char pad[0x5C];
} tMemContext;

extern tMemContext g_GlobalContext;
extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern void sceKernelTotalFreeMemSize__Fv(void);
extern void sceKernelMaxFreeMemSize__Fv(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

void MEM_InitializeMemory__Fv(void) {
    tMemContext *ctx = &g_GlobalContext;
    unsigned int size = 0xCCB000;
    void *heap;

    free(malloc(0x10));
    memset(ctx, 0, 0x6C);
    sceKernelTotalFreeMemSize__Fv();
    sceKernelMaxFreeMemSize__Fv();
    heap = PS2HEAP_Malloc__FUi(size);
    g_GlobalContext.base = heap;
    if (heap != 0) {
        ctx->cursor = heap;
        ctx->remaining = size;
        ctx->size = size;
    }
    memset((char *)ctx + 0x20, 0, 0x4C);
}
