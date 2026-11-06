/* LEVEL_15.REL:0x136130, bounded 60-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +0.
 * The pinned compiler links 64 bytes and differs from the first instruction in global-state and indirect-call setup. Reopen with the virtual table layout and original pointer types.
 */
extern int D_002F4FEC;
extern char *D_002F4FF0;
extern char *D_002F4FF4;

void func_136130(void)
{
    char *record = D_002F4FF4;
    D_002F4FEC = 0;
    D_002F4FF0 = record;
    ((void (*)(char *))(*(void **)(*(char **)record + 0x1c)))
        (record + *(short *)(*(char **)record + 0x18));
}
