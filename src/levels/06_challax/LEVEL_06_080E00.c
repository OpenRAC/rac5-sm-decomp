/* LEVEL_06:0x080E00 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001E515C;
extern int func_080F28(int a);

int func_080E00(int a)
{
    if (func_080F28(a) == 0) {
        return 0;
    }
    return D_001E515C->f1d0;
}
