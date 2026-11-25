/* LEVEL_08:0x135448 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_135350(void *record, float angle);
extern void func_136E98(void *a, void *record, void *b);

void func_135448(void *a, void *b, float angle)
{
    char record[0x30];

    func_135350(record, angle);
    func_136E98(a, record, b);
}
