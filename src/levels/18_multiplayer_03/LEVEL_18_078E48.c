/* LEVEL_18:0x078E48 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001A570C;
extern int func_079008(int a);

int func_078E48(int a)
{
    if (func_079008(a) == 0) {
        return 0;
    }
    return D_001A570C->f1d0;
}
