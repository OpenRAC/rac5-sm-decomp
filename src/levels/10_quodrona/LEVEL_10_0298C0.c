extern int func_029800(int, void *, int);
extern int func_029420(int);
extern int ps2fioClose(int);
extern char D_0023A598[];
extern int D_001FD338;

int func_0298C0(int handle)
{
    int consumed = func_029800(handle, D_0023A598, D_001FD338);
    int closed;
    D_001FD338 -= consumed;
    func_029420(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029420(1) != 0);
    return closed;
}
