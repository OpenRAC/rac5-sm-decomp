/* LEVEL_02.REL:0x0B4F68, bounded 176-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +46. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int *DAT_00210DCC;
extern unsigned char DAT_00210DB6;

int func_000B4F68(unsigned int param_1, int param_2)
{
    unsigned int *table;
    unsigned int *entry;
    unsigned int flag;
    unsigned int count;

    if (DAT_00210DCC == 0)
        goto fail;
    flag = *(unsigned int *)((char *)DAT_00210DCC + 4) & 1;
    DAT_00210DB6 = flag;
    if ((*(unsigned int *)((char *)DAT_00210DCC + 4) & 2) == 0)
        goto fail;
    table = (unsigned int *)((char *)DAT_00210DCC + (flag ? 0x14 : 0x10));
    count = *table;
    table++;
    table += count;
    if (flag)
        table++;
    count = *table++;
    if (param_1 >= count)
        goto fail;
    goto hit;
fail:
    return 0;
hit:
    entry = (unsigned int *)table[param_1];
    if (flag)
        entry++;
    if (param_2 != 0)
        *entry |= 0x10000000;
    else
        *entry &= 0xEFFFFFFF;
    return 1;
}
