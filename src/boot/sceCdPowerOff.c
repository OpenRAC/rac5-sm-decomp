/* boot:0x01EC3738 -- request power-off through the system command channel. */
extern int _sceCd_scmd_prechk(int);
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
extern int SignalSema(int);
extern int _sceCd_scmd_semid;
extern int _sceCd_cd_scmd[];
extern int CD_SCMD_RDATA[];

int sceCdPowerOff(int *status)
{
    int result;

    if (_sceCd_scmd_prechk(0x21) == 0)
        return 0;
    if (sceSifCallRpc(_sceCd_cd_scmd, 0x21, 0, 0, 0, CD_SCMD_RDATA, 8, 0, 0) < 0) {
        SignalSema(_sceCd_scmd_semid);
        return 0;
    }
    *status = *(int *)((unsigned int)(CD_SCMD_RDATA + 1) | 0x20000000);
    result = *(int *)((unsigned int)CD_SCMD_RDATA | 0x20000000);
    SignalSema(_sceCd_scmd_semid);
    return result;
}
