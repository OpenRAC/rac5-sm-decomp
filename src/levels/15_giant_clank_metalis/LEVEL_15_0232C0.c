extern int func_023200(int, void *, int);
extern int func_022E20(int);
extern int ps2fioClose(int);
extern char D_00179318[];
extern int D_00148FB8;

int func_0232C0(int handle)
{
    int consumed = func_023200(handle, D_00179318, D_00148FB8);
    int closed;
    D_00148FB8 -= consumed;
    func_022E20(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_022E20(1) != 0);
    return closed;
}
