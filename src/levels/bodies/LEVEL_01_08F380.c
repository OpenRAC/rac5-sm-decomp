/* LEVEL_01:0x08F380 -- adds one alpha-sort batch to the level's batch table
   (the table starts at 0x248060, one batch is 0x90 bytes); the caller hands
   over the sixty-four bytes of vertices to sort. */
typedef struct {
    float v[16];
} Block;

typedef struct {
    char pad40[0x40];
    Block b;
    int id;
    unsigned char a;
    unsigned char b2;
    unsigned char c;
    char pad87[0x90 - 0x87];
} Batch;

typedef struct {
    Block b;
} Src;

extern unsigned char g_ALPHASORT_CurrentView;
extern unsigned int g_ALPHASORT_nBatchesToRender;
extern Batch D_00248060[];

void func_08F380(Src *src, int id, unsigned char a, unsigned char b, unsigned char c)
{
    Batch *batch;

    if (g_ALPHASORT_nBatchesToRender >= 0x200)
        return;
    if (c == 0xFF)
        c = g_ALPHASORT_CurrentView;
    batch = &D_00248060[g_ALPHASORT_nBatchesToRender];
    batch->id = id;
    batch->a = a;
    batch->b2 = b;
    batch->c = c;
    batch->b = src->b;
    g_ALPHASORT_nBatchesToRender++;
}
