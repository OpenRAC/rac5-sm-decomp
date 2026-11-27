/* USA SCUS_976.15 boot: MODULE_StartModule__FiiPCvi, 0x01E8F3A8.
 * Observed body: 456 bytes, it fills its interval.
 * Measured 26 November 2026: all 456 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Starts a loaded module: the id must be
 * below 8 and the slot in use, the argument block at most 0x400 bytes holding at
 * most 16 NUL-terminated strings. The block is copied into the slot, a thread
 * running the module container is created (64 KB stack, caller's priority) and
 * started with the slot as argument; its id is stored in the slot, otherwise
 * the thread is deleted. Errors return 0x80000001 and 0x80000006..0x80000009.
 * The string count loop keeps the end pointer as args + length inside the loop
 * condition (no named end variable), and the slot is addressed by naming
 * modules[id] again in each statement.
 */
typedef struct {
    void *heap;
    int dll;
    int active : 1;
    int padC;
    int thread;
    int argLen;
    char args[0x418 - 0x18];
} tMODULE;

typedef struct {
    int status;
    void *entry;
    void *stack;
    int stack_size;
    void *gp;
    int priority;
    int pad[6];
} thread_param_t;

extern tMODULE modules[8];
extern unsigned char higModuleSystemInitialized;
extern char D_01FC0810[];
extern char _gp[];
extern int module_init_01E8F7D8(void);
extern void moduleThreadContainer__FPv(void *);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);
extern int CreateThread(thread_param_t *p);
extern int StartThread(int id, void *arg);
extern int DeleteThread(int id);

int MODULE_StartModule__FiiPCvi(int id, int length, const char *args, int priority) {
    thread_param_t tp;
    tMODULE *m;
    int act;
    int argc;
    int tid;
    const char *p;

    if (!higModuleSystemInitialized && module_init_01E8F7D8() != 0) {
        return 0x80000006;
    }
    if ((unsigned int)id >= 8) {
        return 0x80000007;
    }
    m = &modules[id];
    act = m->active;
    if (!act) {
        return 0x80000007;
    }
    if (length >= 0x401) {
        return 0x80000009;
    }
    argc = 0;
    for (p = args; p < args + length; p += strlen(p) + 1) {
        argc++;
    }
    if (argc >= 0x11) {
        return 0x80000008;
    }
    modules[id].argLen = length;
    memcpy(modules[id].args, args, length);
    tp.entry = (void *)moduleThreadContainer__FPv;
    tp.stack = D_01FC0810;
    tp.stack_size = 0x10000;
    tp.gp = _gp;
    tp.priority = priority;
    tid = CreateThread(&tp);
    if (tid >= 0) {
        if (StartThread(tid, &modules[id]) == tid) {
            modules[id].thread = tid;
            return 0;
        }
        DeleteThread(tid);
    }
    return 0x80000001;
}
