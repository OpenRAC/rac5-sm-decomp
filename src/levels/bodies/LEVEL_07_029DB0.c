extern int func_029D68(int, void *, int);
extern int func_029988(int);
extern int ps2fioClose(int);
extern char D_00246898[];
extern int D_00208634;

int func_029DB0(int handle)
{
    int consumed = func_029D68(handle, D_00246898, D_00208634);
    int closed;
    D_00208634 -= consumed;
    func_029988(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029988(1) != 0);
    return closed;
}
