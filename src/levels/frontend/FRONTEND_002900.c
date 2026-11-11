extern int func_002840(int, void *, int);
extern int func_0025B0(int);
extern int ps2fioClose(int);
extern char D_0010BC40[];
extern int D_00027E70;

int func_002900(int handle)
{
    int consumed = func_002840(handle, D_0010BC40, D_00027E70);
    int closed;
    D_00027E70 -= consumed;
    func_0025B0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_0025B0(1) != 0);
    return closed;
}
