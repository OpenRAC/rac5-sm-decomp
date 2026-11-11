extern int func_029FA0(int, void *, int);
extern int func_029BC0(int);
extern int ps2fioClose(int);
extern char D_00280418[];
extern int D_0023CEB8;

int func_02A060(int handle)
{
    int consumed = func_029FA0(handle, D_00280418, D_0023CEB8);
    int closed;
    D_0023CEB8 -= consumed;
    func_029BC0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029BC0(1) != 0);
    return closed;
}
