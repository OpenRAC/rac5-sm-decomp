/* boot:0x01EC5728 -- bind the sound-driver RPC client, waiting for the server. */
struct sd_client {
    int pad_0[9];
    int bound;                     /* +0x24 */
};

extern struct sd_client D_01FE1EC0;
extern int D_01EFE3D8;
extern int D_01EFE3DC;
extern void sceSifInitRpc(int);
extern int sceSifBindRpc(void *, unsigned int, int);
extern int scePrintf(const char *, ...);
extern void FlushCache(int);

int sceSdRemoteInit(void)
{
    int spin;

    sceSifInitRpc(0);
    do {
        if (sceSifBindRpc(&D_01FE1EC0, 0x80000701, 0) < 0) {
            scePrintf("sceSdRemoteInit() RPC bind error!\n");
            return -1;
        }
        for (spin = 10000; spin != -1; spin--) {
        }
    } while (D_01FE1EC0.bound == 0);
    D_01EFE3D8 = 0;
    D_01EFE3DC = 0;
    FlushCache(0);
    return 0;
}
