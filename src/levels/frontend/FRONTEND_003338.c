/* FRONTEND:0x003338 -- placement copy of LEVEL_01_027480.c: sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_00027E9C;

void func_003338(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_00027E9C;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
