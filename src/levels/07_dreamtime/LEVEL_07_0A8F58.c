/* LEVEL_07:0x0A8F58 -- placement copy of FRONTEND_014F58.c: clears the two shared work areas and formats fourteen blocks of the shared buffer: a four-byte tag, two size words and a table of 256 byte pairs (0xFF, 0), then reports success. */
extern unsigned char *D_002082AC;
extern char D_0032AE60[];
extern void *memset(void *, int, unsigned int);

int func_0A8F58(void)
{
    unsigned int i;
    unsigned int j;
    unsigned char *p;

    memset(D_002082AC + 0x10480, 0, 0xE);
    memset(D_0032AE60, 0, 0x8000);
    for (i = 0; i < 14; i++) {
        p = D_002082AC + (i * 0x1000 + 0x1C80);
        p[0] = 'R';
        p[1] = 'E';
        p[2] = '0';
        p[3] = '0';
        *(int *)(p + 4) = 0x8000;
        *(int *)(p + 8) = 0x20C;
        p += 12;
        for (j = 0; j < 256; j++) {
            *p++ = 0xFF;
            *p++ = 0;
        }
    }
    return 1;
}
