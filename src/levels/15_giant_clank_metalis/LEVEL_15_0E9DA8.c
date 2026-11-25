/* LEVEL_15:0x0E9DA8 -- builds a temporary record and passes it with the two
   arguments to its consumer. */
extern void func_0E9D20(void *record, float angle);
extern void func_0EA938(void *a, void *record, void *b);

void func_0E9DA8(void *a, void *b, float angle)
{
    char record[0x30];

    func_0E9D20(record, angle);
    func_0EA938(a, record, b);
}
