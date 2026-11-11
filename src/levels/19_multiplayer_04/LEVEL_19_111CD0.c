/* LEVEL_19:0x111CD0 -- placement copy of FRONTEND_022188.c: clears a 0x18-byte record and stores it in a global slot. */
extern void *memset(void *, int, unsigned int);
typedef struct Rec {
    int a;
    int b;
    int c[4];
} Rec;
typedef struct Holder {
    Rec *cur;
} Holder;
extern Holder D_001B5D24;

int func_111CD0(Rec *record)
{
    if (record == 0)
        return 0;
    memset(record, 0, 0x18);
    D_001B5D24.cur = record;
    record->b = 0;
    D_001B5D24.cur->a = 0;
    return 1;
}