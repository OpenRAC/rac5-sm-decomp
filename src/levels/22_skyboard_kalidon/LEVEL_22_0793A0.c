/* LEVEL_22:0x0793A0 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001555DC;
extern int func_0794C8(int a);

int func_0793A0(int a)
{
    if (func_0794C8(a) == 0) {
        return 0;
    }
    return D_001555DC->f1d0;
}
