/* newlib free: lock, _free_r on the impure reent, unlock. Retail 0x01EC8450. */
extern void *_impure_ptr;
extern void __malloc_lock(void *reent);
extern void __malloc_unlock(void *reent);
extern void _free_r(void *reent, void *p);

void free(void *p)
{
    __malloc_lock(_impure_ptr);
    _free_r(_impure_ptr, p);
    __malloc_unlock(_impure_ptr);
}
