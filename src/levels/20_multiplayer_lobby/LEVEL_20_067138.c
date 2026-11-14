/* LEVEL_20:0x067138 -- placement copy of LEVEL_01_087F88.c: returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_0010696C;
extern int func_0672F8(int a);

int func_067138(int a)
{
    if (func_0672F8(a) == 0) {
        return 0;
    }
    return D_0010696C->f1d0;
}
