extern int func_027598(int, void *, int);
extern int func_0271B8(int);
extern int ps2fioClose(int);
extern char D_001FE418[];
extern int D_001C7734;

int func_0275E0(int handle)
{
    int consumed = func_027598(handle, D_001FE418, D_001C7734);
    int closed;
    D_001C7734 -= consumed;
    func_0271B8(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_0271B8(1) != 0);
    return closed;
}
