/* boot:0x01EC2FC8 -- old-module DiskReady: sends the mode argument over the S-command RPC and returns the reply. Ported from OpenRAC/rac4-decomp src/core/00137998.c (func_00137998). */
typedef struct { unsigned char pad[0x24]; int x24; } Type1;

extern int sceCdSyncS(int);
extern void sceSifInitRpc(int);
extern int sceSifBindRpc(void *, int, int);
extern void sceSifWriteBackDCache();
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
extern void scePrintf();
extern int DIntr(void);
extern void EIntr(void);
extern void cmd_sem_init(void);
extern int PollSema(int);
extern int SignalSema(int);
extern int SCE_CD_debug;
extern volatile int _sceCd_scmd_semid;
extern int _sceCd_old_module;
extern int D_01EFC750;
extern Type1 D_01FDDE90;
extern int D_01FDDED0;
extern int _sceCd_scmdrdata[];
extern char STR_old_diskready_01F264E8[];
extern char STR_bind_err_01F26500[];
extern char STR_diskready_end_01F26520[];

int sceCdDiskReady_old(int arg0) {
    int ei;
    int r;

    if (SCE_CD_debug > 0) {
        scePrintf(STR_old_diskready_01F264E8);
    }
    ei = DIntr();
    _sceCd_old_module = 1;
    if (ei) {
        EIntr();
    }
    cmd_sem_init();
    if (_sceCd_scmd_semid != PollSema(_sceCd_scmd_semid)) {
        return 6;
    }
    if (sceCdSyncS(1) != 0) {
        SignalSema(_sceCd_scmd_semid);
        return arg0 != 8 ? 6 : -1;
    }
    sceSifInitRpc(0);
    if (D_01EFC750 < 0) {
        while (1) {
            int i;
            if (sceSifBindRpc(&D_01FDDE90, 0x8000059A, 0) < 0) {
                if (SCE_CD_debug > 0) {
                    scePrintf(STR_bind_err_01F26500);
                }
                i = 0x100000;
                while (--i != -1) {
                }
            } else if (D_01FDDE90.x24 != 0) {
                D_01EFC750 = 0;
                break;
            } else {
                i = 0x100000;
                while (--i != -1) {
                }
            }
        }
    }
    D_01FDDED0 = arg0;
    sceSifWriteBackDCache(&D_01FDDED0, 4);
    if (sceSifCallRpc(&D_01FDDE90, 0, 0, &D_01FDDED0, 4, _sceCd_scmdrdata, 4, 0, 0) < 0) {
        SignalSema(_sceCd_scmd_semid);
        return arg0 != 8 ? 6 : -1;
    }
    if (SCE_CD_debug > 0) {
        scePrintf(STR_diskready_end_01F26520);
    }
    r = *(int *)((unsigned int)_sceCd_scmdrdata | 0x20000000);
    SignalSema(_sceCd_scmd_semid);
    return r;
}
