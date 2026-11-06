extern char D_0024C650[];
extern void func_16B5D0(void *, void *);
extern void func_1698B8(char *, unsigned char, int);

void func_16AD80(char *record)
{
    func_16B5D0(record, D_0024C650);
    func_1698B8(record, record[0x45], 6);
}
