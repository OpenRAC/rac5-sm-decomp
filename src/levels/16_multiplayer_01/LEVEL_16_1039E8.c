/* LEVEL_16:0x1039E8 -- placement copy of LEVEL_01_1241B8.c: placement copy of LEVEL_15_0E9DA8.c: builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_1038F0(void *record, float angle);
extern void func_104310(void *a, void *record, void *b);

void func_1039E8(void *a, void *b, float angle)
{
    char record[0x30];

    func_1038F0(record, angle);
    func_104310(a, record, b);
}
