/* LEVEL_15:0x06C668 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0014AEDC;
extern int func_06C790(int a);

int func_06C668(int a)
{
    if (func_06C790(a) == 0) {
        return 0;
    }
    return D_0014AEDC->f1d0;
}
