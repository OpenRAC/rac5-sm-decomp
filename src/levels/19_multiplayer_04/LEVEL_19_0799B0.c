/* LEVEL_19:0x0799B0 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001A540C;
extern int func_079B70(int a);

int func_0799B0(int a)
{
    if (func_079B70(a) == 0) {
        return 0;
    }
    return D_001A540C->f1d0;
}
