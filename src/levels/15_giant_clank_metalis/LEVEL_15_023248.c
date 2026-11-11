extern int func_023200(int, void *, int);
extern int func_022E20(int);
extern int ps2fioClose(int);
extern char D_00179118[];
extern int D_00148FB4;

int func_023248(int handle)
{
    int consumed = func_023200(handle, D_00179118, D_00148FB4);
    int closed;
    D_00148FB4 -= consumed;
    func_022E20(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_022E20(1) != 0);
    return closed;
}
