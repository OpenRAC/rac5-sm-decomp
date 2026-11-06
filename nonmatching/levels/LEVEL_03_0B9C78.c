/* LEVEL_03.REL:0x0B9C78, bounded 200-byte candidate.
 * Isolated pinned C object: 200 bytes; first linked
 * difference at body byte +116. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int func_0B9AF8(void *obj);

int func_0B9C78(void *obj, short a, short b, short c, short d)
{
    char *o = obj;
    int iVar1;
    int iVar2;

    *(int *)(o + 0x54) = d;
    *(int *)(o + 0x50) = b;
    *(int *)(o + 0x5C) = c;
    *(int *)(o + 0x80) = b;
    *(int *)(o + 0x58) = a;
    iVar1 = func_0B9AF8(obj);
    iVar2 = func_0B9AF8(obj);
    *(int *)(o + 0xA0) = 3;
    *(int *)(o + 0x8C) = d;
    *(int *)(o + 0x88) = b;
    *(int *)(o + 0x94) = c;
    *(int *)(o + 0x90) = c - 0x10;
    *(int *)(o + 0x98) = 2;
    *(char *)(o + 0x9C) = 0;
    *(int *)(o + 0x84) = ((d - b) / iVar1) * iVar2 + b;
    return 1;
}
