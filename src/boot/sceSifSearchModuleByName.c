/* sceSifSearchModuleByName 0x01ED84C8 -- asks the IOP for the id of a module by name through the module-load RPC client; returns the IOP result or a client error code. */
extern int func_01ED7E98(void);
extern int func_01ED7F98(void);
extern char *strncpy(char *dst, const char *src, unsigned int n);
extern int sceSifCallRpc(void *client, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end_func, void *end_data);
extern int D_01FE7300[];
extern char D_01FE7500[];

int sceSifSearchModuleByName(const char *name) {
    char *p;
    char *buf;

    if (func_01ED7E98() < 0) return 0xFFFF0000;
    if (func_01ED7F98() != 0) return 0xFFFEFFFC;
    p = (char *)D_01FE7300 + 8;
    strncpy(p, name, 0xFC);
    buf = p - 8;
    buf[0x103] = 0;
    if (sceSifCallRpc(D_01FE7500, 9, 0, buf, 0x200, buf, 4, 0, 0) < 0) return 0xFFFEFFFF;
    return *(int *)(p - 8);
}
