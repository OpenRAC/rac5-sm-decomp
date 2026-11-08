/* LEVEL_01.REL:0x1CF650: reviewed 124-byte candidate.
 * pinned C with gnu-ee-trial links 116 bytes; first differs at +40.
 * Retry: Recover the three call blocks and shared epilogue in their retail order from
 * natural C; all qualified cc1 routes retain a shorter layout.
 * No matching credit.
 */
/* LEVEL_01.REL:0x1CF650: useful C candidate, no matching credit.
   Reopen when: Recover the three call blocks and shared epilogue in their retail order from natural C; all qualified cc1 routes retain a shorter layout. */
extern int func_1CF268(void);
extern int func_1CEC70(void);
extern int func_1CF460(void);

int func_1CF650(char *object)
{
    int kind = *(int *)(object + 0x40);
    if (kind == 1)
        goto one;
    if (kind < 2) {
        if (kind == 0)
            goto zero;
        return 0;
    }
    if (kind >= 5)
        return 0;
    goto many;
zero:
    return func_1CF268();
one:
    return func_1CEC70();
many:
    return func_1CF460();
}
