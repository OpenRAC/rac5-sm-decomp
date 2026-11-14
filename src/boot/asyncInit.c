/* boot:0x01EBD768 -- create the request semaphores and worker thread, then start it. */
typedef struct {
    int attr;
    int init_count;
    int max_count;
    int pad[5];
} sema_param_t;

typedef struct {
    int status;
    void *entry;
    void *stack;
    int stack_size;
    void *gp;
    int priority;
    int pad[6];
} thread_param_t;

extern int ps2fio_sema;
extern int D_01FD4C70;
extern int D_01FD4C68;
extern int D_01FD4C80[];
extern char ps2fio_ctx[0xA28];
extern char _gp[];
extern void ps2fio_worker_01EBD308(void *);
extern int CreateSema(sema_param_t *p);
extern int CreateThread(thread_param_t *p);
extern int StartThread(int id, void *arg);
extern void *memset(void *p, int c, unsigned long n);

int asyncInit(void)
{
    sema_param_t sp;
    thread_param_t tp;

    sp.init_count = 1;
    sp.max_count = 0;
    ps2fio_sema = CreateSema(&sp);
    D_01FD4C70 = CreateSema(&sp);
    tp.entry = (void *)ps2fio_worker_01EBD308;
    tp.stack = D_01FD4C80;
    tp.stack_size = 0x4000;
    tp.gp = _gp;
    tp.priority = 2;
    D_01FD4C68 = CreateThread(&tp);
    memset(ps2fio_ctx, 0, 0xA28);
    StartThread(D_01FD4C68, ps2fio_ctx);
    return 0;
}
