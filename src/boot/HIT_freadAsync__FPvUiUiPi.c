/* HIT_freadAsync__FPvUiUiPi -- starts an asynchronous read of size * count bytes on a file handle and clears its end-of-file/error flags. */
extern unsigned char g_eof[];
extern unsigned char g_err[];
extern int higIoReadAsync__FiPvUi(int handle, void *buffer, unsigned int size);

int HIT_freadAsync__FPvUiUiPi(void *buffer, unsigned int size, unsigned int count, int handle) {
    unsigned int index = handle - 1;

    if (index >= 0x20) {
        return 1;
    }
    g_err[index] = 0;
    g_eof[index] = 0;
    if (higIoReadAsync__FiPvUi(index, buffer, size * count) < 0) {
        g_err[index] = 1;
        return 1;
    }
    return 0;
}
