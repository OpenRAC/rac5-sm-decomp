extern int func_029820(int, void *, int);
extern int func_029440(int);
extern int ps2fioClose(int);
extern char D_0024C018[];
extern int D_0020C9B8;

int func_0298E0(int handle)
{
    int consumed = func_029820(handle, D_0024C018, D_0020C9B8);
    int closed;
    D_0020C9B8 -= consumed;
    func_029440(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029440(1) != 0);
    return closed;
}
