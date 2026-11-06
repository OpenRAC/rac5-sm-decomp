extern int func_02A1F0(int, void *, int);
extern int func_029E10(int);
extern int ps2fioClose(int);
extern char D_00248498[];
extern int D_00208FB4;

int func_02A238(int handle)
{
    int consumed = func_02A1F0(handle, D_00248498, D_00208FB4);
    int closed;
    D_00208FB4 -= consumed;
    func_029E10(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029E10(1) != 0);
    return closed;
}
