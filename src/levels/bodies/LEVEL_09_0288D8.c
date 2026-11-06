extern int func_028890(int, void *, int);
extern int func_0284B0(int);
extern int ps2fioClose(int);
extern char D_00218718[];
extern int D_001DE134;

int func_0288D8(int handle)
{
    int consumed = func_028890(handle, D_00218718, D_001DE134);
    int closed;
    D_001DE134 -= consumed;
    func_0284B0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_0284B0(1) != 0);
    return closed;
}
