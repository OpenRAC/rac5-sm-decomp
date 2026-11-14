/* LEVEL_09:0x084940 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001E005C;
extern int func_084A68(int a);

int func_084940(int a)
{
    if (func_084A68(a) == 0) {
        return 0;
    }
    return D_001E005C->f1d0;
}
