/* LEVEL_04:0x08B220 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0020F71C;
extern int func_08B348(int a);

int func_08B220(int a)
{
    if (func_08B348(a) == 0) {
        return 0;
    }
    return D_0020F71C->f1d0;
}
