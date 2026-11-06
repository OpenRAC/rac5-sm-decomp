/* LEVEL_15.REL:0x132718, bounded 64-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +4.
 * The global array clear uses a shorter loop. Reopen with the array's element layout and loop boundary evidence.
 */
extern char *D_002F3E90;
extern int D_002F3E98;

void func_132718(void)
{
    int index;
    char *record = D_002F3E90;
    D_002F3E98 = 0;
    for (index = 0; index < 0x400; index += 8)
        *(int *)(record + index + 4) = 0;
}
