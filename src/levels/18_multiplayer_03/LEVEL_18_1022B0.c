/* LEVEL_18:0x1022B0 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_1021B8(void *record, float angle);
extern void func_102BD8(void *a, void *record, void *b);

void func_1022B0(void *a, void *b, float angle)
{
    char record[0x30];

    func_1021B8(record, angle);
    func_102BD8(a, record, b);
}
