/* LEVEL_02:0x15C738 -- placement copy of LEVEL_01_155EA8.c: relocates the record's stored offset into a pointer (cleared when the target is invalid), sets a flag byte; returns 1. */
typedef struct {
    char pad00[0x45];
    unsigned char flag;
    char pad46[0x54 - 0x46];
    int *rec;
} Obj;

extern int D_0021BD54;

int func_15C738(Obj *o)
{
    int *rec = o->rec;
    int t;

    if (*rec != 0) {
        t = D_0021BD54 + *rec;
        if (*(int *)(t + 0x40) == 0)
            *rec = 0;
        else
            *rec = t;
    }
    o->flag = 1;
    return 1;
}
