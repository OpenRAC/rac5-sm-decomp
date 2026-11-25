/* LEVEL_17:0x102FF8 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_102F00(void *record, float angle);
extern void func_103920(void *a, void *record, void *b);

void func_102FF8(void *a, void *b, float angle)
{
    char record[0x30];

    func_102F00(record, angle);
    func_103920(a, record, b);
}
