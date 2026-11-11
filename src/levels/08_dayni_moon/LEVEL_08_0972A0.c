/* LEVEL_08:0x0972A0 -- a sprite is queued in the alpha sort batch:
   the block is copied and the sort keys are written. */
typedef struct {
    int i[16];
} Block;

typedef struct {
    char pad[0x40];
    Block blk;
    void *param;
    unsigned char key0;
    unsigned char key1;
    unsigned char key2;
    char pad2[9];
} Entry;

extern Entry D_002972E0[];
extern int g_ALPHASORT_nBatchesToRender;
extern unsigned char g_ALPHASORT_CurrentView;

void func_0972A0(Block *src, void *param, int k0, int k1, int k2)
{
    unsigned int count = g_ALPHASORT_nBatchesToRender;
    Entry *entry;

    k0 &= 0xFF;
    k1 &= 0xFF;
    k2 &= 0xFF;

    if (count >= 0x200)
        return;

    if (k2 == 0xFF)
        k2 = g_ALPHASORT_CurrentView;

    entry = &D_002972E0[count];
    entry->param = param;
    entry->key0 = k0;
    entry->key1 = k1;
    entry->key2 = k2;
    entry->blk = *src;

    g_ALPHASORT_nBatchesToRender = count + 1;
}
