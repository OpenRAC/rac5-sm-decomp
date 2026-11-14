/* LEVEL_08:0x08FFD8 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0023F11C;
extern int func_0901A8(int a);

int func_08FFD8(int a)
{
    if (func_0901A8(a) == 0) {
        return 0;
    }
    return D_0023F11C->f1d0;
}
