extern int func_027028(int, void *, int);
extern int func_026C48(int);
extern int ps2fioClose(int);
extern char D_001DFE18[];
extern int D_001A2FE4;

int func_027070(int handle)
{
    int consumed = func_027028(handle, D_001DFE18, D_001A2FE4);
    int closed;
    D_001A2FE4 -= consumed;
    func_026C48(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_026C48(1) != 0);
    return closed;
}
