/* LEVEL_01:0x087F88 -- returns a field of the current record when the check passes for the argument, else 0. */
typedef struct {
    char pad[0x1D0];
    int f1d0;
} Rec;

extern Rec *D_001F625C;
extern int func_0880B0(int a);

int func_087F88(int a)
{
    if (func_0880B0(a) == 0) {
        return 0;
    }
    return D_001F625C->f1d0;
}
