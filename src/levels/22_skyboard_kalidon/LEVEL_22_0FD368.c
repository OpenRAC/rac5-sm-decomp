/* LEVEL_22:0x0FD368 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_0FD270(void *record, float angle);
extern void func_0FDE50(void *a, void *record, void *b);

void func_0FD368(void *a, void *b, float angle)
{
    char record[0x30];

    func_0FD270(record, angle);
    func_0FDE50(a, record, b);
}
