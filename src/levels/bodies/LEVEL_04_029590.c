extern int func_0294D0(int, void *, int);
extern int func_0290F0(int);
extern int ps2fioClose(int);
extern char D_0024B998[];
extern int D_0020D4B8;

int func_029590(int handle)
{
    int consumed = func_0294D0(handle, D_0024B998, D_0020D4B8);
    int closed;
    D_0020D4B8 -= consumed;
    func_0290F0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_0290F0(1) != 0);
    return closed;
}
