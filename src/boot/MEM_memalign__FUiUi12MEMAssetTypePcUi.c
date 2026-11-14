/* MEM_memalign__FUiUi12MEMAssetTypePcUi -- carves an aligned block from the main heap and records the usage by asset type. */
typedef struct {
    void *base;
    unsigned int size;
    unsigned char *cursor;
    void *last;
    unsigned int remaining;
    unsigned char pad[4];
    int count;
} tMemContext;

extern tMemContext g_GlobalContext;
extern void MEM_AddAssetUsage__F12MEMAssetTypeUi(int type, unsigned int size);

void *MEM_memalign__FUiUi12MEMAssetTypePcUi(unsigned int align, unsigned int size, int type, char *name, unsigned int extra) {
    unsigned int remaining = g_GlobalContext.remaining;
    unsigned char *block;
    unsigned int used;

    if (size + align < remaining) {
        block = (unsigned char *)(((unsigned int)g_GlobalContext.cursor + (align - 1)) & (0 - align));
        g_GlobalContext.count = g_GlobalContext.count + 1;
        used = block - g_GlobalContext.cursor + size;
        g_GlobalContext.cursor = block + size;
        g_GlobalContext.last = block;
        g_GlobalContext.remaining = remaining - used;
        MEM_AddAssetUsage__F12MEMAssetTypeUi(type, used);
        return block;
    }
    return 0;
}
