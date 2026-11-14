/* boot:0x01EC35E0 -- ask the CD subsystem for the disc type through the system command channel. */
extern int _sceCd_scmd_prechk(int);
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
extern int SignalSema(int);
extern int _sceCd_scmd_semid;
extern int _sceCd_cd_scmd[];
extern int CD_SCMD_RDATA[];

int sceCdGetDiskType2(void)
{
    int result;

    if (_sceCd_scmd_prechk(1) == 0)
        return -1;
    if (sceSifCallRpc(_sceCd_cd_scmd, 3, 0, 0, 0, CD_SCMD_RDATA, 4, 0, 0) < 0) {
        SignalSema(_sceCd_scmd_semid);
        return -1;
    }
    result = *(int *)((unsigned int)CD_SCMD_RDATA | 0x20000000);
    SignalSema(_sceCd_scmd_semid);
    return result;
}
