extern int func_029A28(int, void *, int);
extern int func_029648(int);
extern int ps2fioClose(int);
extern char D_00231198[];
extern int D_001F4338;

int func_029AE8(int handle)
{
    int consumed = func_029A28(handle, D_00231198, D_001F4338);
    int closed;
    D_001F4338 -= consumed;
    func_029648(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029648(1) != 0);
    return closed;
}
