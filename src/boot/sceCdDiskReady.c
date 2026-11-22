/* 0x01EC31E0 -- libcdvd: waits for the drive to become ready over the S-command RPC (binds the server, retries, sends the mode and returns the reply), falling back to the old-module path when the semaphore is not available. Ported from OpenRAC/rac4-decomp src/core/00137BB0.c (func_00137BB0; itself adapted from rac3-decomp func_0012B800). */
typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    u8 pad0[0x24];
    int f24;
    u8 pad28[0x40 - 0x28];
} Type1;
extern int SCE_CD_debug;
extern volatile int _sceCd_rcmd_semid;
extern int D_01EFC750;
extern int _sceCd_old_module;
extern char STR_diskready_bind_err_01F26500[];
extern char STR_diskready_ended_01F26520[];
extern char STR_diskready_call_01F26538[];
extern Type1 D_01FDDE90;
extern int D_01FDDED0;
extern int _sceCd_rcmdrdata[];
extern int scePrintf();
extern int cmd_sem_init();
extern int PollSema();
extern int SignalSema();
extern int sceSifInitRpc();
extern void sceSifWriteBackDCache();
extern int DIntr();
extern int EIntr();
extern s32 sceSifBindRpc(void *, s32, s32);
extern s32 sceSifCallRpc();
extern int sceCdDiskReady_old();

int sceCdDiskReady(int arg0)
{
    int i;
    int j;
    int r;
    int k;

    if (SCE_CD_debug > 0) {
        scePrintf(STR_diskready_call_01F26538);
    }
    cmd_sem_init();
    if (_sceCd_rcmd_semid != PollSema(_sceCd_rcmd_semid)) {
        return arg0 != 8 ? 6 : -1;
    }
    sceSifInitRpc(0);
    i = 0;
    if (D_01EFC750 < 0) {
        for (;;) {
    L1:
        if (sceSifBindRpc(&D_01FDDE90, 0x8000059C, 0) < 0) {
            if (SCE_CD_debug > 0) {
                scePrintf(STR_diskready_bind_err_01F26500);
            }
            j = 0x100000;
            while (j--) {
            }
            goto L1;
        }
        if (D_01FDDE90.f24 != 0) {
            D_01EFC750 = 0;
            break;
        }
        if (i > 16) {
            SignalSema(_sceCd_rcmd_semid);
            return sceCdDiskReady_old(arg0);
        }
        k = i + 1;
        j = 0x100000;
        while (j--) {
        }
        i = k;
        }
    }
    r = DIntr();
    _sceCd_old_module = 0;
    if (r) {
        EIntr();
    }
    D_01FDDED0 = arg0;
    sceSifWriteBackDCache(&D_01FDDED0, 4);
    if (sceSifCallRpc(&D_01FDDE90, 0, 0, &D_01FDDED0, 4, _sceCd_rcmdrdata, 4, 0, 0) < 0) {
        SignalSema(_sceCd_rcmd_semid);
        return arg0 != 8 ? 6 : -1;
    }
    if (SCE_CD_debug > 0) {
        scePrintf(STR_diskready_ended_01F26520);
    }
    r = *(int *)((u32)_sceCd_rcmdrdata | 0x20000000);
    SignalSema(_sceCd_rcmd_semid);
    return r;
}
