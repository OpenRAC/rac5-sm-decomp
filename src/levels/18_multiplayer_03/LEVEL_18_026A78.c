extern int func_026A30(int, void *, int);
extern int func_026650(int);
extern int ps2fioClose(int);
extern char D_001E0018[];
extern int D_001A32E4;

int func_026A78(int handle)
{
    int consumed = func_026A30(handle, D_001E0018, D_001A32E4);
    int closed;
    D_001A32E4 -= consumed;
    func_026650(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_026650(1) != 0);
    return closed;
}
