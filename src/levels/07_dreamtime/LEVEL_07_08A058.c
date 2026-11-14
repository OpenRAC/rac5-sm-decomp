/* LEVEL_07:0x08A058 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0020A55C;
extern int func_08A180(int a);

int func_08A058(int a)
{
    if (func_08A180(a) == 0) {
        return 0;
    }
    return D_0020A55C->f1d0;
}
