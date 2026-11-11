/* FRONTEND:0x022188 -- clears a 0x18-byte record and stores it in a global slot. */
extern void *memset(void *, int, unsigned int);
typedef struct Rec {
    int a;
    int b;
    int c[4];
} Rec;
typedef struct Holder {
    Rec *cur;
} Holder;
extern Holder D_0003285C;

int func_022188(Rec *record)
{
    if (record == 0)
        return 0;
    memset(record, 0, 0x18);
    D_0003285C.cur = record;
    record->b = 0;
    D_0003285C.cur->a = 0;
    return 1;
}