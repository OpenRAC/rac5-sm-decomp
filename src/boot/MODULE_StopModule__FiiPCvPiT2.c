/* MODULE_StopModule__FiiPCvPiT2 -- terminates the thread of an active loaded module. */
typedef struct {
    int pad0;
    int pad4;
    int active : 1;
    int padC;
    int thread;
    char rest[0x418 - 0x14];
} tMODULE;

extern tMODULE modules[8];
extern unsigned char higModuleSystemInitialized;
extern int module_init_01E8F7D8(void);
extern int TerminateThread(int tid);

int MODULE_StopModule__FiiPCvPiT2(int id, int a, const void *b, int *c, int *d) {
    tMODULE *m;
    int off;
    int *th;
    int act;

    if (!higModuleSystemInitialized && module_init_01E8F7D8() != 0) {
        return 0x80000001;
    }
    if ((unsigned int)id >= 8) {
        return 0x80000001;
    }
    off = id * sizeof(tMODULE);
    m = (tMODULE *)((char *)modules + off);
    act = m->active;
    if (!act) {
        return 0x80000007;
    }
    th = (int *)((char *)&modules[0].thread + off);
    if (*th == -1) {
        return 0x8000000B;
    }
    if (TerminateThread(*th) != *th) {
        return 0x80000001;
    }
    *th = -1;
    return 0;
}
