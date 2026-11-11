/* FRONTEND:0x004D90 -- reads a byte out of slot 1 or 2 of the global table. */
extern char D_00110000[];

unsigned char func_004D90(int a)
{
    char *p;

    a--;
    if ((unsigned int)a >= 2u) {
        return 0;
    }
    p = &D_00110000[-0x3F80];
    return (unsigned char)p[a * 0x240 + 0x144];
}
