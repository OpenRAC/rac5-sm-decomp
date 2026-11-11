extern int func_029FA0(int, void *, int);
extern int func_029BC0(int);
extern int ps2fioClose(int);
extern char D_00280218[];
extern int D_0023CEB4;

int func_029FE8(int handle)
{
    int consumed = func_029FA0(handle, D_00280218, D_0023CEB4);
    int closed;
    D_0023CEB4 -= consumed;
    func_029BC0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029BC0(1) != 0);
    return closed;
}
