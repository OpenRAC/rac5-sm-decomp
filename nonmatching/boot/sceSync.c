/* sceSync 0x01ED7450..0x01ED7600 (432 bytes).
 * libfileio sync: copy the path into the shared FsCall block (at most 0x400
 * bytes), then issue RPC 0x13 to the fileio server and wait for its answer. */
struct FsCallSync {
    int sema;            /* +0x00 */
    void *result;        /* +0x04 */
    int result_size;     /* +0x08 */
    int pad0C;           /* +0x0C */
    int flag;            /* +0x10 */
    char path[0x400];    /* +0x14 */
};

struct SemaParam {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};

extern struct FsCallSync fs_call;
extern int fs_ready;
extern int fs_rpc_client[];
extern int fs_rpc_result[];
extern char fs_sync_sema_name[];

extern void _sceFsWaitS(int);
extern void sceFsInit(void);
extern int CreateSema(struct SemaParam *);
extern int DeleteSema(int);
extern int WaitSema(int);
extern int ReadQueueStatus(void);
extern int fs_call_rpc(void *, int, int, void *, int, void *, int, void *, void *,
                       void *);

int sceSync(char *path, int flag) {
    struct FsCallSync *call = &fs_call;
    struct SemaParam sp;
    int sema;
    int result;
    int status;
    int i;

    _sceFsWaitS(0x13);
    if (fs_ready == 0) sceFsInit();
    i = 0;
    while (i < 0x400) {
        if ((*(((char *)call + i) + 0x14) = path[i]) == 0) break;
        i++;
    }
    if (i == 0x400) *((char *)call + 0x413) = 0;
    call->flag = flag;
    sp.max_count = 1;
    sp.option = (unsigned)fs_sync_sema_name;
    sp.init_count = 0;
    sema = CreateSema(&sp);
    call->result = &result;
    call->sema = sema;
    call->result_size = 4;
    if (fs_call_rpc(fs_rpc_client, 0x13, 0, &fs_call, 0x414, fs_rpc_result, 4, 0,
                    0, 0) < 0) {
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
