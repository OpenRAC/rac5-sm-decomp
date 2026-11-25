/* LEVEL_07:0x127538 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_127440(void *record, float angle);
extern void func_128C10(void *a, void *record, void *b);

void func_127538(void *a, void *b, float angle)
{
    char record[0x30];

    func_127440(record, angle);
    func_128C10(a, record, b);
}
