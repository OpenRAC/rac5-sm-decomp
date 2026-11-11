/* LEVEL_10:0x132740 -- placement copy of FRONTEND_022188.c: clears a 0x18-byte record and stores it in a global slot. */
extern void *memset(void *, int, unsigned int);
typedef struct Rec {
    int a;
    int b;
    int c[4];
} Rec;
typedef struct Holder {
    Rec *cur;
} Holder;
extern Holder D_0020FCF4;

int func_132740(Rec *record)
{
    if (record == 0)
        return 0;
    memset(record, 0, 0x18);
    D_0020FCF4.cur = record;
    record->b = 0;
    D_0020FCF4.cur->a = 0;
    return 1;
}