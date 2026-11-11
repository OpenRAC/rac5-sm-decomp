/* LEVEL_15:0x128998 -- calls a per-record update twice over two adjacent records. */
extern char D_002F2DE8[];
extern void func_1286F8(char *a0);

void func_128998(void)
{
    char *p;
    int i;

    p = D_002F2DE8;
    i = 0;
    do {
        i++;
        func_1286F8(p);
        p += 0xEC;
    } while (i != 2);
}
