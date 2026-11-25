/* LEVEL_02:0x12A450 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_12A358(void *record, float angle);
extern void func_12BF68(void *a, void *record, void *b);

void func_12A450(void *a, void *b, float angle)
{
    char record[0x30];

    func_12A358(record, angle);
    func_12BF68(a, record, b);
}
