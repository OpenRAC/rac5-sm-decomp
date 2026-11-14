/* LEVEL_16:0x1369D0 -- returns -1 when func_112E10 is clear and func_112E00 is set; otherwise relocates the record's stored offset into a pointer (cleared when the target is invalid), sets a flag byte and returns 1. */
typedef struct {
    char pad00[0x45];
    unsigned char flag;
    char pad46[0x54 - 0x46];
    int *rec;
} Obj;

extern int D_001B48A4;
extern unsigned int func_112E10(void);
extern unsigned int func_112E00(void);

int func_1369D0(Obj *o)
{
    int *rec;
    int t;

    if (func_112E10() == 0) {
        if (func_112E00() != 0)
            return -1;
    }
    rec = o->rec;
    if (*rec != 0) {
        t = D_001B48A4 + *rec;
        if (*(int *)(t + 0x40) == 0)
            *rec = 0;
        else
            *rec = t;
    }
    o->flag = 1;
    return 1;
}
