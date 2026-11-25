/* LEVEL_04:0x130020 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_12FF28(void *record, float angle);
extern void func_131DE8(void *a, void *record, void *b);

void func_130020(void *a, void *b, float angle)
{
    char record[0x30];

    func_12FF28(record, angle);
    func_131DE8(a, record, b);
}
