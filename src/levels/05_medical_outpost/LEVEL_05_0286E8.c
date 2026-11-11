extern int func_0286A0(int, void *, int);
extern int func_0282C0(int);
extern int ps2fioClose(int);
extern char D_0021CC98[];
extern int D_001E36B4;

int func_0286E8(int handle)
{
    int consumed = func_0286A0(handle, D_0021CC98, D_001E36B4);
    int closed;
    D_001E36B4 -= consumed;
    func_0282C0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_0282C0(1) != 0);
    return closed;
}
