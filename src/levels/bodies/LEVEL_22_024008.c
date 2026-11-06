extern int func_023FC0(int, void *, int);
extern int func_023BE0(int);
extern int ps2fioClose(int);
extern char D_00182B98[];
extern int D_001536B4;

int func_024008(int handle)
{
    int consumed = func_023FC0(handle, D_00182B98, D_001536B4);
    int closed;
    D_001536B4 -= consumed;
    func_023BE0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_023BE0(1) != 0);
    return closed;
}
