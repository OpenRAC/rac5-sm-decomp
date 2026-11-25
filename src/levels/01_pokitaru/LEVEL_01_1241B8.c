/* LEVEL_01:0x1241B8 -- placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_1240C0(void *record, float angle);
extern void func_125C08(void *a, void *record, void *b);

void func_1241B8(void *a, void *b, float angle)
{
    char record[0x30];

    func_1240C0(record, angle);
    func_125C08(a, record, b);
}
