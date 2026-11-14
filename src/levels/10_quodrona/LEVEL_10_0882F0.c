/* LEVEL_10:0x0882F0 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001FF25C;
extern int func_088418(int a);

int func_0882F0(int a)
{
    if (func_088418(a) == 0) {
        return 0;
    }
    return D_001FF25C->f1d0;
}
