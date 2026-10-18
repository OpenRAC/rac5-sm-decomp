/* scePadEnd -- libpad teardown (retail 0x01EA39A0). */
typedef unsigned int u32;

extern int scePadSetDmaCallback(int callback);
extern int sceSifCallRpc(void *cd, unsigned int rpcNum, unsigned int mode,
                         void *send, int ssize, void *receive, int rsize,
                         void *end_func, void *end_param);
extern void sceSifRemoveCmdHandler(unsigned int id);
extern u32 pad_initialized;      /* 0x01EFAF38 */
extern u32 pad_suspend_flag;     /* 0x01EFAF44 */
extern u32 pad_client[];         /* 0x01FD3600 */
extern u32 pad_rpc_buffer[];     /* 0x01FD3840 */

int scePadEnd(void) {
    if (pad_initialized == 0)
        return 1;
    scePadSetDmaCallback(0);
    pad_rpc_buffer[0] = 0xF;
    if (sceSifCallRpc(pad_client, 1, 0, pad_rpc_buffer, 0x80,
                      pad_rpc_buffer, 0x80, 0, 0) < 0)
        return 0;
    sceSifRemoveCmdHandler(0x80000019);
    if (pad_rpc_buffer[3] == 1)
        pad_initialized = 0;
    pad_suspend_flag = 0;
    return pad_rpc_buffer[3];
}
