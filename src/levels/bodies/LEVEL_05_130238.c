/* LEVEL_05:0x130238 -- placement copy of FRONTEND_022188.c: clears a 0x18-byte record and stores it in a global slot. */
extern void *memset(void *, int, unsigned int);
typedef struct Rec {
    int a;
    int b;
    int c[4];
} Rec;
typedef struct Holder {
    Rec *cur;
} Holder;
extern Holder D_001F6114;

int func_130238(Rec *record)
{
    if (record == 0)
        return 0;
    memset(record, 0, 0x18);
    D_001F6114.cur = record;
    record->b = 0;
    D_001F6114.cur->a = 0;
    return 1;
}