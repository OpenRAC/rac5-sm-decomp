/* LEVEL_06:0x11A820 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_11A728(void *record, float angle);
extern void func_11C118(void *a, void *record, void *b);

void func_11A820(void *a, void *b, float angle)
{
    char record[0x30];

    func_11A728(record, angle);
    func_11C118(a, record, b);
}
