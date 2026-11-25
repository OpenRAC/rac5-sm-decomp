/* LEVEL_09:0x11D5F8 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_11D500(void *record, float angle);
extern void func_11ECD0(void *a, void *record, void *b);

void func_11D5F8(void *a, void *b, float angle)
{
    char record[0x30];

    func_11D500(record, angle);
    func_11ECD0(a, record, b);
}
