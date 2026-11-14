/* sceSifUnloadModule 0x01ED8438 -- asks the IOP to unload a module by id through the module-load RPC client; returns the IOP result or a client error code. */
extern int func_01ED7E98(void);
extern int func_01ED7F98(void);
extern int sceSifCallRpc(void *client, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end_func, void *end_data);
extern int D_01FE7300[];
extern char D_01FE7500[];

int sceSifUnloadModule(int id) {
    int *buf;

    if (func_01ED7E98() < 0) return 0xFFFF0000;
    if (func_01ED7F98() != 0) return 0xFFFEFFFC;
    buf = D_01FE7300;
    D_01FE7300[0] = id;
    if (sceSifCallRpc(D_01FE7500, 8, 0, buf, 4, buf, 4, 0, 0) < 0) return 0xFFFEFFFF;
    return D_01FE7300[0];
}
