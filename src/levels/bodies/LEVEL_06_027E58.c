extern int func_027E10(int, void *, int);
extern int func_027A30(int);
extern int ps2fioClose(int);
extern char D_0021DD18[];
extern int D_001E3234;

int func_027E58(int handle)
{
    int consumed = func_027E10(handle, D_0021DD18, D_001E3234);
    int closed;
    D_001E3234 -= consumed;
    func_027A30(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_027A30(1) != 0);
    return closed;
}
