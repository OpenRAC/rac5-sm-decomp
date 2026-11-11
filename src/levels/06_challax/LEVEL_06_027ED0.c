extern int func_027E10(int, void *, int);
extern int func_027A30(int);
extern int ps2fioClose(int);
extern char D_0021DF18[];
extern int D_001E3238;

int func_027ED0(int handle)
{
    int consumed = func_027E10(handle, D_0021DF18, D_001E3238);
    int closed;
    D_001E3238 -= consumed;
    func_027A30(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_027A30(1) != 0);
    return closed;
}
