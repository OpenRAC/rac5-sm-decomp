/* LEVEL_21.REL:0x134BA0, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +2.
 * The callback and label pointer stores use different address registers. Reopen with the object field layout and function-pointer type.
 */
extern char *D_002F4F88;
extern void func_001349B8(void);
extern char D_00134B68[];
extern int D_002F50C8;
extern int D_002F50CC;
extern int D_002F50C4;

void func_134BA0(void)
{
    char *object = *(char **)(D_002F4F88 + 0x48);
    *(void **)(object + 0xdc) = (void *)func_001349B8;
    *(void **)(object + 0xe0) = D_00134B68;
    D_002F50C8 = -1;
    D_002F50CC = 0;
    D_002F50C4 = -1;
}
