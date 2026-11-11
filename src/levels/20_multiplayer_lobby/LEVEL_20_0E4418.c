/* LEVEL_20:0x0E4418 -- placement copy of FRONTEND_022188.c: clears a 0x18-byte record and stores it in a global slot. */
extern void *memset(void *, int, unsigned int);
typedef struct Rec {
    int a;
    int b;
    int c[4];
} Rec;
typedef struct Holder {
    Rec *cur;
} Holder;
extern Holder D_00117264;

int func_0E4418(Rec *record)
{
    if (record == 0)
        return 0;
    memset(record, 0, 0x18);
    D_00117264.cur = record;
    record->b = 0;
    D_00117264.cur->a = 0;
    return 1;
}