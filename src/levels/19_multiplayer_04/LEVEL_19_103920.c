/* LEVEL_19:0x103920 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_103828(void *record, float angle);
extern void func_104A20(void *a, void *record, void *b);

void func_103920(void *a, void *b, float angle)
{
    char record[0x30];

    func_103828(record, angle);
    func_104A20(a, record, b);
}
