/* FRONTEND.REL:0x01E380, bounded 60-byte candidate.
 * Isolated pinned C object: 60 bytes; first linked difference
 * at body byte +11. Not linked into the accepted gate or counted.
 * Reopen: Recover the masked-index register and final record comparison control flow.
 */
extern int D_00032608[];
int *func_01E380(unsigned int value)
{
    unsigned char index = value;
    int *record;
    if (index < 16) {
        record = D_00032608 + index * 3;
        if (record[2] == value)
            return record;
    }
    return 0;
}
