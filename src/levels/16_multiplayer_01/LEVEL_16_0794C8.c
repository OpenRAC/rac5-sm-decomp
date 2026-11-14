/* LEVEL_16:0x0794C8 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001A428C;
extern int func_079688(int a);

int func_0794C8(int a)
{
    if (func_079688(a) == 0) {
        return 0;
    }
    return D_001A428C->f1d0;
}
