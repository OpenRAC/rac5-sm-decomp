/* higIoClose__Fi -- closes a file handle, retrying while the disc state check keeps reporting trouble. */
extern char g_openFiles[];
extern int g_nOpenFileHandles;
extern int higIoReleaseHandle_01E655C0(int handle, char *files, int count);
extern int UMD_checkState__Fb(int flag);
extern int ps2fioClose(int handle);

int higIoClose__Fi(int handle) {
    int r;

    g_nOpenFileHandles -= higIoReleaseHandle_01E655C0(handle, g_openFiles, g_nOpenFileHandles);
    UMD_checkState__Fb(1);
    do {
        r = ps2fioClose(handle);
        if (r == 0) {
            break;
        }
    } while (UMD_checkState__Fb(1) != 0);
    return r;
}
