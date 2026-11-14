/* MODULE_UnloadModule__Fi -- unloads an inactive-thread module: releases its dll and heap block. */
typedef struct {
    void *heap;
    int dll;
    int active : 1;
    int padC;
    int thread;
    char rest[0x418 - 0x14];
} tMODULE;

extern tMODULE modules[8];
extern unsigned char higModuleSystemInitialized;
extern int module_init_01E8F7D8(void);
extern void module_remove_01E8F878(int id);
extern void snDllUnload(int dll);
extern void PS2HEAP_Free__FPv(void *p);

int MODULE_UnloadModule__Fi(int id) {
    tMODULE *m;
    int act;

    if (!higModuleSystemInitialized && module_init_01E8F7D8() != 0) {
        return 0x80000001;
    }
    if ((unsigned int)id >= 8) {
        return 0x80000001;
    }
    m = &modules[id];
    act = m->active;
    if (!act) {
        return 0x80000007;
    }
    if (modules[id].thread != -1) {
        return 0x8000000A;
    }
    snDllUnload(modules[id].dll);
    PS2HEAP_Free__FPv(m->heap);
    module_remove_01E8F878(id);
    return 0;
}
