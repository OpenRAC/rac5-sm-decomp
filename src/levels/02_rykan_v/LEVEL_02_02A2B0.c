extern int func_02A1F0(int, void *, int);
extern int func_029E10(int);
extern int ps2fioClose(int);
extern char D_00248698[];
extern int D_00208FB8;

int func_02A2B0(int handle)
{
    int consumed = func_02A1F0(handle, D_00248698, D_00208FB8);
    int closed;
    D_00208FB8 -= consumed;
    func_029E10(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_029E10(1) != 0);
    return closed;
}
