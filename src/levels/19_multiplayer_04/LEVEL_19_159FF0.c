/* LEVEL_19:0x159FF0 -- placement copy of LEVEL_10_167628.c: asks func_02E6C0 about the record and, when it accepts, returns a word of the record's linked object. */
struct Link {
    char pad0[0x30];
    int f30;
};

struct Rec {
    char pad0[0x40];
    struct Link *f40;
    char pad44[0x10];
    int f54;
};

extern int func_02E6C0(int a0, int a1, struct Rec *rec, int a3, int a4);

int func_159FF0(int a0, int a1, struct Rec *rec)
{
    if (func_02E6C0(a0, a1, rec, rec->f54, 0) != 0)
        return rec->f40->f30;
    return 0;
}
