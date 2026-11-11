/* LEVEL_08:0x0258C0 -- placement copy of LEVEL_01_025040.c: checks an index against a limit, then tests three fields of a looked-up record. */
typedef struct {
    char pad_00[0x38];
    int f_38;
    int f_3C;
    int f_40;
} Rec;

extern Rec *func_024EF0(unsigned int a0, int a1);

int func_0258C0(unsigned int a0)
{
    Rec *r;

    if (a0 < 0x19) {
        r = func_024EF0(a0, -1);
        if (r->f_38 == 0 || r->f_40 == 0 || r->f_3C == 0) {
            return 0;
        }
    }
    return 1;
}
