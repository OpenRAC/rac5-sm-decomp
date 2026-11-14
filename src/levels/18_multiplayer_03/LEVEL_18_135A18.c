/* LEVEL_18:0x135A18 -- placement copy of LEVEL_16_1369D0.c: returns -1 when func_111BC8 is clear and func_111BB8 is set; otherwise relocates the record's stored offset into a pointer (cleared when the target is invalid), sets a flag byte and returns 1. */
typedef struct {
    char pad00[0x45];
    unsigned char flag;
    char pad46[0x54 - 0x46];
    int *rec;
} Obj;

extern int D_001B5D24;
extern unsigned int func_111BC8(void);
extern unsigned int func_111BB8(void);

int func_135A18(Obj *o)
{
    int *rec;
    int t;

    if (func_111BC8() == 0) {
        if (func_111BB8() != 0)
            return -1;
    }
    rec = o->rec;
    if (*rec != 0) {
        t = D_001B5D24 + *rec;
        if (*(int *)(t + 0x40) == 0)
            *rec = 0;
        else
            *rec = t;
    }
    o->flag = 1;
    return 1;
}
