/* LEVEL_24:0x11A0C8 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_119FD0(void *record, float angle);
extern void func_11B7A0(void *a, void *record, void *b);

void func_11A0C8(void *a, void *b, float angle)
{
    char record[0x30];

    func_119FD0(record, angle);
    func_11B7A0(a, record, b);
}
