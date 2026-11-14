/* newlib __malloc_lock (sce thread-owner lock), retail 0x01EC87D8: a thread that already owns the lock only bumps the count. */
extern int __malloc_owner;
extern int __malloc_lock_count;
extern int __sce_sema_id;
extern int GetThreadId(void);
extern int WaitSema(int sema);
void __malloc_lock(void *reent)
{
    int tid = GetThreadId();
    if (__malloc_owner == tid) {
        __malloc_lock_count++;
        return;
    }
    WaitSema(__sce_sema_id);
    __malloc_owner = tid;
    __malloc_lock_count++;
}
