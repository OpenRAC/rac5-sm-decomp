/* ReleaseBufferCache__Fv -- drops the buffer cache when it holds anything and reports whether it did. */
extern int G_buffer_cache_size;
extern void *G_buffer_cache_ptr;
extern void UpdateBufferCacheState__Fv(void);

int ReleaseBufferCache__Fv(void) {
    if (G_buffer_cache_size == 0) {
        if (G_buffer_cache_ptr == 0) {
            return 0;
        }
    }
    G_buffer_cache_size = 0;
    UpdateBufferCacheState__Fv();
    return 1;
}
