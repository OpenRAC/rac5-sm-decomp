extern int func_023F88(int, void *, int);
extern int func_023BA8(int);
extern int ps2fioClose(int);
extern char D_00137818[];
extern int D_00104548;

int func_024048(int handle)
{
    int consumed = func_023F88(handle, D_00137818, D_00104548);
    int closed;
    D_00104548 -= consumed;
    func_023BA8(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_023BA8(1) != 0);
    return closed;
}
