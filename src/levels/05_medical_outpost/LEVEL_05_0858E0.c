/* LEVEL_05:0x0858E0 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001E55DC;
extern int func_085A08(int a);

int func_0858E0(int a)
{
    if (func_085A08(a) == 0) {
        return 0;
    }
    return D_001E55DC->f1d0;
}
