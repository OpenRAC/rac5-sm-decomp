extern int func_027480(int, void *, int);
extern int func_0270A0(int);
extern int ps2fioClose(int);
extern char D_001DFC98[];
extern int D_001A1E64;

int func_0274C8(int handle)
{
    int consumed = func_027480(handle, D_001DFC98, D_001A1E64);
    int closed;
    D_001A1E64 -= consumed;
    func_0270A0(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_0270A0(1) != 0);
    return closed;
}
