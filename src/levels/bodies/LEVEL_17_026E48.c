extern int func_026E00(int, void *, int);
extern int func_026A20(int);
extern int ps2fioClose(int);
extern char D_001D0F98[];
extern int D_00195464;

int func_026E48(int handle)
{
    int consumed = func_026E00(handle, D_001D0F98, D_00195464);
    int closed;
    D_00195464 -= consumed;
    func_026A20(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_026A20(1) != 0);
    return closed;
}
