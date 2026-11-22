/* USA boot sceCdRead (22 November 2026): port of a sister decompilation twin,
 * not accepted.
 * 23 differing words; one extra nop in a delay slot after a semaphore load. No
 * matching credit.
 */
/* boot:0x01EC3400 -- starts reading sectors from the disc into a memory buffer through the N-command RPC. Ported from OpenRAC/rac2-decomp src/core/001253A8.c (sceCdRead). */
extern int _sceCd_ee_read_mode;
extern int SCE_CD_debug;
extern int sceCdNcmdDiskReady(void);
extern int _sceCd_ncmd_prechk(int);
extern char _sceCd_ncmdsdata[];
extern char _sceCd_rd_intr_data[];
extern int _sceCd_Read_cur_pos;
extern char _sceCd_cd_ncmd[];
extern int _sceCd_ncmd_semid;
extern volatile int sceCdCbfunc_num;
extern volatile int _sceCd_c_cb_sem;
extern char STR_cdread_cmd_01F26550[];
extern char STR_cdread_end_01F26568[];
extern void sceSifWriteBackDCache(void *, int);
extern void scePrintf();
extern void _sceCd_cd_read_intr();
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
extern int SignalSema(int);

int sceCdRead(int lba, int sectors, void *buf, unsigned char *mode) {
    char *req = _sceCd_ncmdsdata;
    int byte_count;
    int rpc_result;

    if ((_sceCd_ee_read_mode & 1) == 0) {
        if (sceCdNcmdDiskReady() == 6) {
            return 0;
        }
    }
    if (_sceCd_ncmd_prechk(4) == 0) {
        return 0;
    }

    *(int *)(req + 0x0) = lba;
    *(int *)(req + 0x4) = sectors;
    *(void **)(req + 0x8) = buf;
    req[0xC] = mode[0];
    req[0xD] = mode[1];
    req[0xE] = mode[2];
    *(void **)(req + 0x10) = _sceCd_rd_intr_data;
    *(void **)(req + 0x14) = &_sceCd_Read_cur_pos;

    switch (mode[2]) {
    case 1:
        byte_count = sectors * 0x918;
        break;
    case 2:
        byte_count = sectors * 0x924;
        break;
    case 0:
    default:
        byte_count = sectors << 11;
        break;
    }

    _sceCd_Read_cur_pos = 0;
    if ((*(volatile int *)&_sceCd_ee_read_mode & 2) == 0) {
        sceSifWriteBackDCache(buf, byte_count);
    }
    sceSifWriteBackDCache(_sceCd_rd_intr_data, 0x90);
    sceSifWriteBackDCache(req, 0x18);
    sceSifWriteBackDCache(&_sceCd_Read_cur_pos, 4);
    if (SCE_CD_debug > 0) {
        scePrintf(STR_cdread_cmd_01F26550);
    }

    sceCdCbfunc_num = 1;
    *(volatile int *)&_sceCd_c_cb_sem = 1;
    rpc_result = sceSifCallRpc(_sceCd_cd_ncmd, 1, 1, req, 0x18, 0, 0,
                      (void *)_sceCd_cd_read_intr, _sceCd_rd_intr_data);
    if (rpc_result < 0) {
        sceCdCbfunc_num = 0;
        *(volatile int *)&_sceCd_c_cb_sem = 0;
        SignalSema(*(volatile int *)&_sceCd_ncmd_semid);
        return 0;
    }
    if (SCE_CD_debug > 0) {
        scePrintf(STR_cdread_end_01F26568);
    }
    return 1;
}
