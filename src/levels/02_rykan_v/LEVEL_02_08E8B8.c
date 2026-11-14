/* LEVEL_02:0x08E8B8 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0020B21C;
extern int func_08E9E0(int a);

int func_08E8B8(int a)
{
    if (func_08E9E0(a) == 0) {
        return 0;
    }
    return D_0020B21C->f1d0;
}
