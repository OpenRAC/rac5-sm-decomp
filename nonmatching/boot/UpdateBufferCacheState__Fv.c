/* UpdateBufferCacheState__Fv 0x01E82FC0 (14 November 2026).
 * Measured pinned: 28 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct QWdata QWdata;

extern unsigned int G_buffer_cache_size;
extern QWdata *G_buffer_cache_ptr;
extern unsigned int g_dlibBufferSize;
extern void AdjustDLISTSize__FUiPP6QWdataPUi(unsigned int size, QWdata **out_ptr, unsigned int *out_count);

void UpdateBufferCacheState__Fv(void) {
    QWdata *ptr;
    unsigned int count;

    if (G_buffer_cache_size != 0) {
        if (G_buffer_cache_ptr == 0) {
            AdjustDLISTSize__FUiPP6QWdataPUi((g_dlibBufferSize * 2 - ((G_buffer_cache_size + 15) >> 4)) >> 1, &ptr, &count);
            G_buffer_cache_ptr = ptr;
        }
    }
    if (G_buffer_cache_size == 0) {
        if (G_buffer_cache_ptr != 0) {
            AdjustDLISTSize__FUiPP6QWdataPUi(0, 0, 0);
            G_buffer_cache_ptr = 0;
        }
    }
}
