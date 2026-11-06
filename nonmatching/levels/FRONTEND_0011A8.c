/* FRONTEND.REL:0x0011A8, bounded 152-byte candidate.
 * Isolated pinned C object: 144 bytes; first linked
 * difference at body byte +30. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail keeps &D_27E04 in $s2 across the call and stores through 0($s2). Reopen by making the store address live across the call.
 */
extern char *strcpy(char *destination, const char *source);
extern int func_000418(char *name);

extern char D_00027D88[];
extern unsigned char D_00027D61;
extern unsigned char D_00027DE8;
extern int D_00027E04;
extern int D_00027E1C;

int func_000011A8(char *param_1, int param_2)
{
    unsigned int uVar1;

    strcpy(D_00027D88, param_1);
    D_00027DE8 = param_2;
    if (D_00027D61 != 0) {
        uVar1 = 0;
    } else {
        D_00027D61 = 1;
        if (param_2 == 0) {
            D_00027E04 = func_000418(param_1);
        } else {
            D_00027E04 = 0;
        }
        uVar1 = 1;
        D_00027E1C = 1;
    }
    return uVar1;
}
