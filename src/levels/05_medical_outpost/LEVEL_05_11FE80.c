/* LEVEL_05:0x11FE80 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_11FD88(void *record, float angle);
extern void func_1216B0(void *a, void *record, void *b);

void func_11FE80(void *a, void *b, float angle)
{
    char record[0x30];

    func_11FD88(record, angle);
    func_1216B0(a, record, b);
}
