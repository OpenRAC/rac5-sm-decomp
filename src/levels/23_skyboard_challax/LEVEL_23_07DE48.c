/* LEVEL_23:0x07DE48 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001C965C;
extern int func_07DF70(int a);

int func_07DE48(int a)
{
    if (func_07DF70(a) == 0) {
        return 0;
    }
    return D_001C965C->f1d0;
}
