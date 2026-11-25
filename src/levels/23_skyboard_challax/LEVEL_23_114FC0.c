/* LEVEL_23:0x114FC0 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_114EC8(void *record, float angle);
extern void func_1168B8(void *a, void *record, void *b);

void func_114FC0(void *a, void *b, float angle)
{
    char record[0x30];

    func_114EC8(record, angle);
    func_1168B8(a, record, b);
}
