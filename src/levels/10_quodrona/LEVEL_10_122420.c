/* LEVEL_10:0x122420 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_122328(void *record, float angle);
extern void func_123AF8(void *a, void *record, void *b);

void func_122420(void *a, void *b, float angle)
{
    char record[0x30];

    func_122328(record, angle);
    func_123AF8(a, record, b);
}
