extern int func_026F68(int, void *, int);
extern int func_026B88(int);
extern int ps2fioClose(int);
extern char D_001FCE98[];
extern int D_001C4FB4;

int func_026FB0(int handle)
{
    int consumed = func_026F68(handle, D_001FCE98, D_001C4FB4);
    int closed;
    D_001C4FB4 -= consumed;
    func_026B88(1);
    do {
        closed = ps2fioClose(handle);
        if (closed == 0) {
            break;
        }
    } while (func_026B88(1) != 0);
    return closed;
}
