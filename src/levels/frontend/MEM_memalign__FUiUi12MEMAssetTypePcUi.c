/* FRONTEND:0x01C7C0 -- carves an aligned block from the main heap and records the usage by asset type. Ported from rac5-sm-decomp src/boot/MEM_memalign__FUiUi12MEMAssetTypePcUi.c (MEM_memalign__FUiUi12MEMAssetTypePcUi). */
typedef struct {
    void *base;
    unsigned int size;
    unsigned char *cursor;
    void *last;
    unsigned int remaining;
    unsigned char pad[4];
    int count;
} tMemContext;

extern tMemContext D_001977B8;
extern void func_01C780(int index, int value);

void *MEM_memalign__FUiUi12MEMAssetTypePcUi(unsigned int align, unsigned int size, int type, char *name, unsigned int extra) {
    unsigned int remaining = D_001977B8.remaining;
    unsigned char *block;
    unsigned int used;

    if (size + align < remaining) {
        block = (unsigned char *)(((unsigned int)D_001977B8.cursor + (align - 1)) & (0 - align));
        D_001977B8.count = D_001977B8.count + 1;
        used = block - D_001977B8.cursor + size;
        D_001977B8.cursor = block + size;
        D_001977B8.last = block;
        D_001977B8.remaining = remaining - used;
        func_01C780(type, used);
        return block;
    }
    return 0;
}
