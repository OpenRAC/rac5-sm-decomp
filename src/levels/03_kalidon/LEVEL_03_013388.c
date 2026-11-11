extern unsigned char D_0024A651;
extern char D_0024A578[];
extern void func_094DF0(void *);

void func_013388(void)
{
    char *record;
    if (D_0024A651 != 0) {
        record = D_0024A578;
        do {
            func_094DF0(record);
            record += 0x68;
        } while (record < D_0024A578 + 0xd0);
    }
}
