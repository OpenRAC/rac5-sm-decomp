/* LEVEL_24:0x081228 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001C6EDC;
extern int func_081350(int a);

int func_081228(int a)
{
    if (func_081350(a) == 0) {
        return 0;
    }
    return D_001C6EDC->f1d0;
}
