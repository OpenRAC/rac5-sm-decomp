/* USA SCUS_976.15 boot: MODULE_LoadModule__FPCc, 0x01E8F218.
 * Observed body: 400 bytes, it fills its interval.
 * Measured 26 November 2026: all 400 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Loads a module file: it initialises the
 * module system if needed, takes a free module slot, opens the file, measures
 * its length with two seeks, allocates the length rounded up to 0x800 plus 0x7F
 * bytes of heap, reads the file into the 0x80-aligned part, flushes the cache and
 * registers it as a dll. On success the slot records heap block, aligned base,
 * the in-use bit and the address of lib_main__FiPPc, a symbol the boot leaves
 * unresolved (the reference symbol table places it at address zero), so the
 * stored word is zero in the boot; otherwise the heap block is freed. Failures
 * return 0x80000002..0x80000006, success returns the slot index.
 * The seek result had to live in its own variable (len) separate from the
 * rounded size, and the aligned base is computed with a signed mask.
 * HIT_fseek__FPii9SEEKPARAM is declared int because its result is used here
 * (the accepted definition is void); HIT_fclose__FPi is declared int as in the
 * retained GLOBALWAD_LoadPlayerWad trial. Both need reconciliation in review.
 */
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
extern char D_01F1FD78[];
extern int lib_main__FiPPc(int argc, char **argv);
extern int module_init_01E8F7D8(void);
extern int func_1E8F838(void);
extern int HIT_fopen_internal__FPCcT0(const char *name, const char *mode);
extern int HIT_fseek__FPii9SEEKPARAM(int handle, int offset, int mode);
extern int HIT_fread__FPvUiUiPi(void *buf, unsigned int size, unsigned int count, int handle);
extern int HIT_fclose__FPi(int handle);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);
extern void PS2HEAP_Free__FPv(void *p);
extern void FlushCache(int);
extern int snDllLoaded(void *base, int reason);

int MODULE_LoadModule__FPCc(const char *name) {
    int id;
    int fd;
    int size;
    int len;
    char *raw;
    char *base;

    if (!higModuleSystemInitialized && module_init_01E8F7D8() != 0) {
        return 0x80000006;
    }
    id = func_1E8F838();
    if (id < 0) {
        return 0x80000002;
    }
    fd = HIT_fopen_internal__FPCcT0(name, D_01F1FD78);
    if (fd == 0) {
        return 0x80000003;
    }
    len = HIT_fseek__FPii9SEEKPARAM(fd, 0, 1);
    HIT_fseek__FPii9SEEKPARAM(fd, 0, 2);
    size = (len + 0x7FF) & -0x800;
    raw = PS2HEAP_Malloc__FUi(size | 0x7F);
    if (raw == 0) {
        HIT_fclose__FPi(fd);
        return 0x80000004;
    }
    base = (char *)(((int)raw + 0x7F) & -0x80);
    HIT_fread__FPvUiUiPi(base, 1, size, fd);
    HIT_fclose__FPi(fd);
    FlushCache(0);
    if (snDllLoaded(base, 0) != 0) {
        PS2HEAP_Free__FPv(raw);
        return 0x80000005;
    } else {
        modules[id].heap = raw;
        modules[id].active = 1;
        modules[id].dll = (int)base;
        modules[id].padC = (int)lib_main__FiPPc;
        return id;
    }
}
