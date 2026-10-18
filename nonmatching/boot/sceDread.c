/* sceDread 0x01ED6CE0..0x01ED6E34 (344 bytes)
 *
 * libfileio direct read: same RPC block as sceRead but always synchronous and
 * with no buffer write-back, since the direct path bypasses the queue.
 *
 *   0x01ED6D00  get_iob(fd), _sceFsWaitS(0xB)
 *   0x01ED6D14  fs_ready == 0 / iob == 0 / iob->mode == 0 -> -9
 *   0x01ED6D68  CreateSema(&sema) with option "SceStdioDreadSema"
 *   0x01ED6DB8  fs_call_rpc(client, 0xB, 0, call, 0x20, result, 4, 0, 0, 0)
 *   0x01ED6DC8  failure: WaitSema(sema); ReadQueueStatus(); -11
 *   0x01ED6E04  success: WaitSema(sema); DeleteSema(sema); return *result
 *
 * Unlike sceRead the failure path still waits on the completion semaphore
 * before reporting the error. */

struct FsIob {
    int fd;
    int mode;
    int pad8;
    int padC;
};

struct FsCall {
    int sema;            /* +0x00 */
    void *result;        /* +0x04 */
    int result_size;     /* +0x08 */
    int fd;              /* +0x0C */
    void *buf;           /* +0x10 */
    int size;            /* +0x14 */
    int unk18;           /* +0x18 */
    int iob;             /* +0x1C */
};

struct SemaParam {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};

extern struct FsCall fs_call;          /* 0x01FE5940 */
extern int fs_ready;                   /* 0x01F0EFDC */
extern struct FsIob fs_iobs[];         /* 0x01FE6E40 */
extern unsigned char fs_rpc_client[];  /* 0x01FE7040 */
extern unsigned char fs_rpc_result[];  /* 0x01FE6580 */
extern char sceStdioDreadSemaName[];   /* 0x01F27980 */

extern struct FsIob *get_iob(int fd);
extern void _sceFsWaitS(int);
extern int ReadQueueStatus(void);
extern int CreateSema(struct SemaParam *);
extern int DeleteSema(int);
extern int WaitSema(int);
extern int fs_call_rpc(void *, int, int, void *, int, void *, int, void *, void *, void *);

int sceDread(int fd, void *buf, int size) {
    struct FsCall *call = &fs_call;
    struct FsIob *iob;
    struct SemaParam sp;
    int result;
    int mode;
    int sema;
    int ret;

    iob = get_iob(fd);
    _sceFsWaitS(0xB);
    if (fs_ready == 0 || iob == 0 || (mode = iob->mode) == 0) {
        ReadQueueStatus();
        return -9;
    }
    call->fd = iob->fd;
    call->buf = buf;
    sp.max_count = 1;
    sp.option = (unsigned)sceStdioDreadSemaName;
    sp.init_count = 0;
    sema = CreateSema(&sp);
    call->sema = sema;
    call->result = &result;
    call->result_size = 4;
    if (fs_call_rpc(fs_rpc_client, 0xB, 0, call, 0x20, fs_rpc_result, 4, 0, 0, 0) < 0) {
        WaitSema(sema);
        ReadQueueStatus();
        return -11;
    }
    ret = *(int *)((unsigned)fs_rpc_result | 0x20000000);
    ReadQueueStatus();
    if (ret == 0) {
        DeleteSema(sema);
        return -11;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return result;
}
