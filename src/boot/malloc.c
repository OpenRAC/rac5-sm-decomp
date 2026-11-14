/* newlib malloc: lock, _malloc_r on the impure reent, unlock. Retail 0x01EC8400. */
extern void *_impure_ptr;
extern void __malloc_lock(void *reent);
extern void __malloc_unlock(void *reent);
extern void *_malloc_r(void *reent, unsigned int n);

void *malloc(unsigned int n)
{
    void *r;
    __malloc_lock(_impure_ptr);
    r = _malloc_r(_impure_ptr, n);
    __malloc_unlock(_impure_ptr);
    return r;
}
