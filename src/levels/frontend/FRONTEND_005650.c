/* FRONTEND:0x005650 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0002AD1C;
extern int func_005748(int a);

int func_005650(int a)
{
    if (func_005748(a) == 0) {
        return 0;
    }
    return D_0002AD1C->f1d0;
}
