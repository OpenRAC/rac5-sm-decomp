/* sceDopen 0x01ED6AB0 (14 November 2026).
 * Measured sdk991111: 28 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    int handle;
    int w4;
    int w8;
    int wC;
} FsSlot;

extern FsSlot D_01FE6E40[];
extern int D_01EFEFDC;
extern int D_01EFEFE8;
extern void F_lock(int mode);
extern void F_unlock(void);
extern void sceFsInit(void);
extern FsSlot *H_slotalloc(void);
extern int func_01ED6478(const char *path, int mode);
extern int WaitSema(int sema);
extern int SignalSema(int sema);

int sceDopen(const char *path) {
    FsSlot *slot;
    int r;

    F_lock(9);
    if (D_01EFEFDC == 0) sceFsInit();
    F_unlock();
    slot = H_slotalloc();
    if (slot == 0) return -0x13;
    r = func_01ED6478(path, 9);
    if (r < 0) {
        WaitSema(D_01EFEFE8);
        slot->w4 = 0;
    } else {
        WaitSema(D_01EFEFE8);
        slot->handle = r;
        r = slot - D_01FE6E40;
    }
    SignalSema(D_01EFEFE8);
    return r;
}
