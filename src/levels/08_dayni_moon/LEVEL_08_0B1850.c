/* LEVEL_08:0x0B1850 -- placement copy of FRONTEND_014F58.c: clears the two shared work areas and formats fourteen blocks of the shared buffer: a four-byte tag, two size words and a table of 256 byte pairs (0xFF, 0), then reports success. */
extern unsigned char *D_0023CB2C;
extern char D_003647E0[];
extern void *memset(void *, int, unsigned int);

int func_0B1850(void)
{
    unsigned int i;
    unsigned int j;
    unsigned char *p;

    memset(D_0023CB2C + 0x10480, 0, 0xE);
    memset(D_003647E0, 0, 0x8000);
    for (i = 0; i < 14; i++) {
        p = D_0023CB2C + (i * 0x1000 + 0x1C80);
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
