/* LEVEL_17:0x079F40 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0019788C;
extern int func_07A100(int a);

int func_079F40(int a)
{
    if (func_07A100(a) == 0) {
        return 0;
    }
    return D_0019788C->f1d0;
}
