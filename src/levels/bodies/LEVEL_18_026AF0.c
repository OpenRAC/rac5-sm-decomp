extern int func_026A30(int, void *, int);
extern int func_026650(int);
extern int ps2fioClose(int);
extern char D_001E0218[];
extern int D_001A32E8;

int func_026AF0(int handle)
{
    int consumed = func_026A30(handle, D_001E0218, D_001A32E8);
    int closed;
    D_001A32E8 -= consumed;
    func_026650(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_026650(1) != 0);
    return closed;
}
