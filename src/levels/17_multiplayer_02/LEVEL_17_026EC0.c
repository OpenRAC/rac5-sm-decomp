extern int func_026E00(int, void *, int);
extern int func_026A20(int);
extern int ps2fioClose(int);
extern char D_001D1198[];
extern int D_00195468;

int func_026EC0(int handle)
{
    int consumed = func_026E00(handle, D_001D1198, D_00195468);
    int closed;
    D_00195468 -= consumed;
    func_026A20(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_026A20(1) != 0);
    return closed;
}
