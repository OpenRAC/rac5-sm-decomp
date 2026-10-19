struct FsCallGs {
    int sema;            /* +0x00 */
    void *result;        /* +0x04 */
    int result_size;     /* +0x08 */
    void *stat;          /* +0x0C */
    char path[0x400];    /* +0x10 */
};

struct SemaParam {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};

extern struct FsCallGs fs_call;
extern int fs_ready;
extern int fs_rpc_client[];
extern int fs_rpc_result[];
extern char fs_getstat_sema_name[];

extern void _sceFsWaitS(int);
extern void sceFsInit(void);
extern int CreateSema(struct SemaParam *);
extern int DeleteSema(int);
extern int WaitSema(int);
extern int ReadQueueStatus(void);
extern int fs_call_rpc(void *, int, int, void *, int, void *, int, void *, void *,
                       void *);

int sceGetstat(unsigned char *path, void *stat) {
    struct FsCallGs *call = &fs_call;
    struct SemaParam sp;
    int sema;
    int result;
    int status;
    int i;

    _sceFsWaitS(0xC);
    if (fs_ready == 0) sceFsInit();
    i = 0;
    while (i < 0x400) {
        if ((*(((unsigned char *)call + i) + 0x10) = path[i]) == 0) break;
        i++;
    }

    if (i == 0x400) {
        *((unsigned char *)call + 0x40F) = 0;
        i = 0x3FF;
    }
    call->stat = stat;
    sp.max_count = 1;
    sp.option = (unsigned)fs_getstat_sema_name;
    sp.init_count = 0;
    sema = CreateSema(&sp);
    call->result = &result;
    call->sema = sema;
    call->result_size = 4;
    if (fs_call_rpc(fs_rpc_client, 0xC, 0, &fs_call, i + 0x11, fs_rpc_result,
                    4, 0, 0, 0) < 0) {
        DeleteSema(sema);
        ReadQueueStatus();
        return -11;
    }
    status = *(int *)((unsigned)fs_rpc_result | 0x20000000);
    ReadQueueStatus();
    if (status == 0) {
        DeleteSema(sema);
        return -11;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return result;
}
