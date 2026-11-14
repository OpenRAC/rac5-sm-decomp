/* LEVEL_03:0x087DE0 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0020E8DC;
extern int func_087F08(int a);

int func_087DE0(int a)
{
    if (func_087F08(a) == 0) {
        return 0;
    }
    return D_0020E8DC->f1d0;
}
